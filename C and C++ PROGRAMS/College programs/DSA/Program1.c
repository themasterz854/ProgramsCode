#include<stdio.h>   
#include<stdlib.h>
#define MAX 10

struct Stack {
    int arr[MAX];
    int top;
    };
int isempty(struct Stack* s)
{
    if(s->top == -1)
    return 1;
    else
    return 0;
}
int isfull(struct Stack* s){
    if(s->top == MAX - 1)
    return 1;
    else
    {
        return 0;
    }    
}
void push(int item,struct Stack* s)
{
    if(isfull(s))
    {
        printf("Stack overflow\n");
    }
    else
    {
        s->arr[++s->top] = item;
    }
}
int pop(struct Stack* s){
    int x;
    if(isempty(s))
    {
        printf("Stack underflow\n");
    }
    else
    {   
        x = s->arr[s->top--];
        printf("\n%d has been popped.\n", x);
    }
    return x;
}
void display(struct Stack* s)
{
    int i;
    if(s->top == -1)
    {
        printf("The stack is empty\n");
        return;
    }
    printf("The elements are :\n");
    for(i=0;i<=s->top;i++)
    {
        printf("%d ", s->arr[i]);
    }
}
int thirdfromtop(struct Stack s)
{   
    int y;
    if(s.top >= 2)
    {
        pop(&s);
        pop(&s);
        y = s.arr[s.top];
        return y;
    }
    else
    {
       printf("\nStack doesn't have enough elements\n");
       return 0;
    }
}
int thirdfrombottom(struct Stack s)
{   int y;
    if(s.top>=2)
    {
    while(s.top>2)
    {
        pop(&s);
    }
    y = s.arr[s.top];
    return y;
    }
    else
    {
        printf("\nStack doesnt have enough elements\n");
        return 0;
    }
    
}
int main()
{  struct Stack s1;
   int ch,y,n,ele,i; 
   s1.top = -1;
   while(1)
   {
       printf("\n1.3rd element from top\n2.Pop n elements\n3.3rd element from bottom\n4.Push\n5.Pop\n6.Display\n");
       scanf("%d",&ch); 
       switch(ch)
       {
           case 1:
             y = thirdfromtop(s1);
             printf("\ny = %d \n",y);
             break;
           case 2: 
            printf("Enter n ");
            scanf("%d",&n);
            if(n > s1.top + 1)
            {
                printf("\nStack doesn't have enough elements\n");
                break;
            }
            for(i=1;i<=n;i++)
            {   
                if(isempty(&s1))
                {
                    printf("stack underflow\n ");
                    break;
                }
                y = pop(&s1);
            }
            break;
            case 3:
              y = thirdfrombottom(s1);
              printf("\ny = %d \n",y);
              break;
            case 4: 
               printf("Enter the element ");
               scanf("%d",&ele);
               push(ele,&s1);
               break;
            case 5:
              pop(&s1);
              break;
            case 6:
               display(&s1);
               break;
           default: exit(0);

       }

   }
}