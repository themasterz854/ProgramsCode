#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define MAX 50
struct node {
    struct node* left;
    char key;
    struct node* right;
};
//function to create nodes
struct node* getnode(char key)
{
    struct node* p;
    p = (struct node*)malloc(sizeof(struct node));
    p->key = key;
    p->right = p->left = NULL;
    return p;
}
struct Stack {
    int top;
    struct node* nodes[MAX];
};
void push(struct Stack* s, struct node* p)
{
    if (s->top == MAX - 1)
    {
        printf("Overflow");
        return;
    }
    else
    {
        s->nodes[++s->top] = p;
    }
}
struct node* pop(struct Stack* s)
{
    if (s->top == -1)
    {
        printf("Underflow\n");
        return NULL;
    }
    else
    {
        return  (s->nodes[s->top--]);
    }
}
void preorder(struct node* root)
{
    if (root != NULL)
    {
        printf("%c ", root->key);
        preorder(root->left);
        preorder(root->right);

    }
}
void inorder(struct node* root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%c ", root->key);
        inorder(root->right);
    }
}
void postorder(struct node* root)
{
    if (root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%c ", root->key);
    }
}
//precedence function, works by returning values for different operators(including parentheses)
int prec(char opstacktop, char op)
{
    int x, y;
    if (opstacktop == '(' || op == '(')
        return 0;
    if (op == ')')
        return 1;
    switch (opstacktop)
    {
    case '+': x = 1;
        break;
    case '-': x = 1;
        break;
    case '*': x = 2;
        break;
    case '/': x = 2;
        break;
    case '^':
    case '$':
        x = 3;
    }
    switch (op)
    {
    case '+': y = 1;
        break;
    case '-': y = 1;
        break;
    case '*': y = 2;
        break;
    case '/': y = 2;
        break;
    case '^':
    case '$':
        y = 3;
    }
    if (x > y)
        return 1;
    else
        return 0;
}
//function to create the expression tree
struct node* createexpressiontree()
{
    struct Stack treestack;
    struct Stack opstack;
    struct node* p, * q, * root;
    int i, pcount = 0, operandcount = 0, operatorcount = 0, flag = 1;
    treestack.top = -1;
    opstack.top = -1;
    root = NULL;
    char inputstring[MAX];
    char cursymb;
    printf("Enter the input string\n");
    gets(inputstring);
    for (i = 0; inputstring[i] != '\0'; i++)
    {
        if (isalnum(inputstring[i]))
        {
            operandcount++;
            if (isalnum(inputstring[i + 1]))
            {
                printf("INVALID(continous operand)\n");
                flag = 0;
                break;
            }
        }
        else if (inputstring[i] != '(' && inputstring[i] != ')')
        {
            operatorcount++;
            if (!isalnum(inputstring[i + 1]))
            {
                printf("INVALID(continous operator)");
                flag = 0;
                break;
            }
        }
    }
    if (!flag)
    {
        ;
    }
    //this condition is used to invalidate  extra or less inputs
    else if (operatorcount != operandcount - 1)
    {
        printf("INVALID\n");
        return NULL;
    }
    else
    {
        for (int i = 0; inputstring[i] != '\0'; i++)
        {
            cursymb = inputstring[i];
            if (isalnum(cursymb))
            {
                p = getnode(cursymb);
                push(&treestack, p);
            }
            else
            {
                //a right parenthesis is encountered when there are no left parentheses, this is invalid
                if (cursymb == ')' && pcount == 0)
                {
                    printf("extra parenthesis\n");
                    flag = 0;
                    break;
                }
                if (cursymb == '(')
                {
                    pcount++; //pcount keeps track of left parentheses
                }
                //while the stack is empty and precedence of top operator is higher, pop the operator and push it into treestack
                while ((opstack.top != -1) && prec((opstack.nodes[opstack.top])->key, cursymb))
                {
                    q = pop(&opstack);
                    q->right = pop(&treestack);
                    q->left = pop(&treestack);
                    push(&treestack, q);
                }
                //after exiting the while loop we know that the precedence of current operator is higher
                //if there are no operators in the stack or the current symbol is not a right parenthesis , push it into the opstack
                if (opstack.top == -1 || cursymb != ')')
                {
                    q = getnode(cursymb);
                    push(&opstack, q);
                }
                //after all the conditions we know the top operator is a left parenthesis , therefore pop it out
                else if (cursymb == ')')
                {
                    pop(&opstack);
                    pcount--;
                }
            }

        }
        //after analysing the entire string if parenthesis are still left, its invalid
        if (pcount)
        {
            flag = 0;
            printf("missing parenthesis\n");
        }
        //if flag is true, it will pop all remaining operators and add them to the tree
        if (flag)
        {
            while (opstack.top != -1)
            {
                q = pop(&opstack);
                q->right = pop(&treestack);
                q->left = pop(&treestack);
                push(&treestack, q);
            }
        }
        //otherwise it will just pop everything, not make any changes to tree
        else
        {
            while (opstack.top != -1)
            {
                pop(&opstack);
            }
        }

    }
    //if flag is true then tree has been made, else it has failed
    if (flag)
        root = pop(&treestack);
    else
        root = NULL;
    return root;
}
int main()
{
    int choice;
    struct node* root = NULL;
    printf("Expression tree\n");
    root = createexpressiontree();
    if (root != NULL)
    {
        printf("\nprefix\n");
        preorder(root);
        printf("\ninfix\n");
        inorder(root);
        printf("\npostfix\n");
        postorder(root);
    }
    else
    {
        printf("\nError while making the tree\n");
    }
    return 0;
}

/* Observation:
In this program we take an infix expression (with or without parentheses) and use the concept of expression tree to display its
postfix,infix and prefix expressions. The user enters an infix expression as an input string.
First we validate the user's input, and then we start going through the input string. We use two stacks here, the treestack and
opstack. While going through the string we check for extra parenthesis or missing parenthesis. We use the precedence function to decide
whether to push or pop the current top operator in stack. If precendence of top operator is higher then it is popped and added to the
treestack. The process is repeated until the end of the string is reached. Finally the tree is created. If there was any failure while
creating the tree, a NULL pointer will be returned (ie the tree is not created.)
The preorder,inorder, postorder traversals of this tree gives the prefix,infix,postfix expression of the given infix expression respectively.
*/