#include<stdio.h>
#include<stdlib.h>
struct STACK {
    int top;
    char st[1000];
};

void push(struct STACK* s, char a)
{
    s->st[++s->top] = a;
}
void pop(struct STACK* s)
{
    s->top--;
}
int isBalanced(char* s) {
    int i, flag = 1;
    char yes = "YES";
    char no = "NO";

    struct STACK s1;
    s1.top == -1;
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            push(&s1, s[i]);
        }
        else if (s[i] == ')')
        {
            if (s1.st[s1.top] == '(')
            {
                pop(&s1);
            }
            else
            {
                flag = 0;
                break;
            }
        }
        else if (s[i] == '}')
        {
            if (s1.st[s1.top] == '{')
            {
                pop(&s1);
            }
            else
            {
                flag = 0;
                break;
            }
        }
        else if (s[i] == ']')
        {
            if (s1.st[s1.top] == '[')
            {
                pop(&s1);
            }
            else
            {
                flag = 0;
                break;
            }
        }
    }

    return flag;
}

int main()
{
    char s[100] = "{([{}])";
    if (isBalanced(s))
        printf("YES");
    else
        printf("NO");
}