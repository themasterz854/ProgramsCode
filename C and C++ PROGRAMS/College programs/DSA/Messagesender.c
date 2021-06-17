#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define QLEN 5
#define MLEN 100  
struct Queue{
    int front,rear;
    char arr[QLEN][MLEN];
};

void enQueue(struct Queue* Q, char str[101])
{ 
  if((Q->rear == QLEN - 1 && Q->front == 0) || (Q->rear == Q->front - 1))
  {
      printf("Queue is full\n");
      return;
  }
  else if(Q->front == -1)
  {
    Q->front = Q->rear = 0;
  }
  else if(Q->rear == QLEN - 1 && Q->front != 0)
  {
      Q->rear = 0;
  }
  else
  {
      Q->rear++;
  }
  strcpy(Q->arr[Q->rear],str);

}
void deQueue(struct Queue* Q)
{   char str[101];
    if(Q->front == -1)
    {
        printf("Queue is empty\n");
        return;
    }  
    strcpy(str, Q->arr[Q->front]); 
    if(Q->front == Q->rear)
    {
        Q->front = Q->rear = -1;
    }
    else if(Q->front == QLEN - 1)
    {   
        Q->front = 0;
    }
    else
    {
        Q->front++;
    }
    puts(str);
}
void display(struct Queue* Q)
{  
    if (Q->front == -1) 
    { 
        printf("Queue is Empty\n"); 
        return; 
    } 
    printf("\nElements in Circular Queue are:\n"); 
    if (Q->rear >= Q->front) 
    { 
        for (int i = Q->front; i <= Q->rear; i++) 
            puts(Q->arr[i]); 
    } 
    else
    { 
        for (int i = Q->front; i < QLEN; i++) 
            puts(Q->arr[i]); 
  
        for (int i = 0; i <= Q->rear; i++) 
             puts(Q->arr[i]); 
    } 
    
}
int main()
{   
    int choice,x;
    char str[100];
    struct Queue Q1;
    Q1.front = Q1.rear = -1;
    while(1)
    {
        printf("1.Enqueue\n2.Dequeue\n3.Display\n");
        scanf("%d",&choice);
        getchar();
        switch(choice)
        {
            case 1: printf("Enter the message\n");
            gets(str);
            enQueue(&Q1, str);
            break;

            case 2: deQueue(&Q1);
            break;
            
            case 3: display(&Q1);
            break;

            default: exit(0);
        }
    }
}