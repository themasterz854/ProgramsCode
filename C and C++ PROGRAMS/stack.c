#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 5
void push(int);
void pop();
void disp();
void swap();
void clears();
int top=-1;
int stack[MAX];
void main()
{
    int ch,item;
    while(1)
    {
        printf("1.Push\n2.pop\n3.display top element\n4.swap top two elements\n5.clear stack\n6.exit\n");
        scanf_s("%d",&ch);
        switch(ch)
        {
            case 1 : printf("Enter the item\n");
            scanf_s("%d",&item);
            push(item);
            break;
            case 2 : pop();
            break;
            case 3 : disp();
            break;
            case 4 : swap();
            break;
            case 5 : clears();
            break;
            case 6 : exit(0);
            default : printf("INvalid choice\n");
        }
    }
}
void push(int itm)
{
    if(top==MAX-1)
    {
        printf("STACK OVERflOW\n");
        return;
    }
    top++;
    stack[top]=itm;
    printf("item has been pushed\n");
}
void pop()
{
    if(top==-1)
    {
        printf("STACK EMPTY\n");
        return;
    }
    top--;
    printf("Item has been popped\n");
}
void disp()
{
    if(top==-1)
    {
        printf("Stack empty\n");
        return;
    }

    printf("%d\n",stack[top]);
}
void swap()
{
    if(top==-1)
    {
        printf("STack empty\n");
        return;
    }
    int temp;
    temp=stack[top];
    stack[top]=stack[top-1];
    stack[top-1]=temp;
    printf("Items have been swapped\n");
}
void clears()
{
    top=-1;
}
