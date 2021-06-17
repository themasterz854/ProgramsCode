#include <stdio.h>
#include <stdlib.h>    
struct node {
    int data;
    struct node* right;
    struct node* left;
};

typedef struct node* NODE;

//function to create BST
NODE createBST(NODE root, int item)
{
    NODE temp, prev, cur;
    temp = (NODE)malloc(sizeof(struct node));
    temp->data = item;
    temp->left = NULL;
    temp->right = NULL;
    if (root == NULL)
        return temp;
    prev = NULL;
    cur = root;
    //navigating to the position of the element by comparing it with th elements of the tree
    while (cur != NULL)
    {
        prev = cur;
        if (item < cur->data)
            cur = cur->left;
        else
            cur = cur->right;
    }
    //assigning the position to the element
    if (prev->data > item)
        prev->left = temp;
    else
        prev->right = temp;
    return root;
}

NODE inordersuccessor(NODE root)
{
    NODE cur = root;
    while (cur->left != NULL)
        cur = cur->left;
    return cur;
}

NODE deleteNode(NODE root, int key)
{
    NODE temp;
    if (root == NULL)
        return root;
    //recursively finding the position of the element
    if (key < root->data)
        root->left = deleteNode(root->left, key);
    else if (key > root->data)
        root->right = deleteNode(root->right, key);
    else
    {
        if (root->left == NULL)
        {
            temp = root->right;
            free(root);
            return temp;
        }
        if (root->right == NULL)
        {
            temp = root->left;
            free(root);
            return temp;
        }
        temp = inordersuccessor(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }

    return root;
}


void Preorder(NODE root)
{
    if (root != NULL)
    {
        printf("%d\t", root->data);
        Preorder(root->left);
        Preorder(root->right);
    }
}

void Inorder(NODE root)
{
    if (root != NULL)
    {
        Inorder(root->left);
        printf("%d\t", root->data);
        Inorder(root->right);
    }
}

void Postorder(NODE root)
{
    if (root != NULL)
    {
        Postorder(root->left);
        Postorder(root->right);
        printf("%d\t", root->data);
    }
}

int main()
{
    NODE root = NULL;
    int ch, item, key;
    for (; ; )
    {
        printf("\n 1.Insert");
        printf("\n 2.Delete");
        printf("\n 3.Preorder");
        printf("\n 4.Inorder");
        printf("\n 5.Postorder");
        printf("\n 6.Exit");
        printf("\n Read Choice");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
        {
            printf("\n Read element to be inserted");
            scanf("%d", &item);
            root = createBST(root, item);
            break;
        }
        case 2:
        {
            printf("\n Read node to be deleted");
            scanf("%d", &key);
            root = deleteNode(root, key);
            break;
        }
        case 3:
        {
            printf("\n PreOrder\n");
            Preorder(root);
            break;
        }
        case 4:
        {
            printf("\n InOrder\n");
            Inorder(root);
            break;
        }
        case 5: {
            printf("\n PostOrder\n");
            Postorder(root);
            break;
        }
        case 6: {
            exit(0);
        }
        default: exit(0);
        }
    }

    return 0;
}

/* Observation:
Binary search tree is a binary tree in which all the elements to the left of a node are lesser than that node, and those to the right
are greater than that node. In this program we have implemented the functions of insertion, deletion , inorder , preorder, postorder
traversals using recursion for the binary search tree. The elements are taken as input and a binary search tree is made using the
createBST function. Insertion takes place by recursively navigating the tree and comparing with the nodes until the position for the
element is found. Deletion makes use of inordersuccessor function to readjust the tree into a binary search tree.
The user can insert elements,delete , or  display inorder, preorder, postorder traversals.
*/