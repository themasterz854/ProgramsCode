#include<stdio.h>
#include<string.h>
#define MAX 100
struct Queue {
	int arr[MAX];
	int front;
	int rear;
}q1;
struct customer {
	char name[40];
	char number[11];
	int id;
}c[MAX];
int id_gen = 0;
int nc = 0;
void addcall(char name[40], char number[11])
{
	int i,flag = 0,j;
	if (q1.rear == -1)
	{
		q1.rear = q1.front = 0;
	}
	else if (q1.rear == MAX - 1)
	{
		printf("waiting line is full pls try again later");
		return;
	}
	else
	{
		q1.rear++;
	}
		for (i = 0; i < nc; i++)
		{
			if (_strcmpi(number, c[i].number) == 0)
			{
				flag = 1;
				break;
			}
		}
		if (!flag)
		{
			strcpy_s(c[nc].name, name);
			strcpy_s(c[nc].number, number);
			c[nc].id = ++id_gen;
			nc++;
		}
		for (j = q1.front; j <= q1.rear; j++)
		{   
			if (c[i].id == q1.arr[j])
			{
				printf("U are already in line. pls wait\n");
				q1.rear--;
				return;
			}
		}
		q1.arr[q1.rear] = c[i].id;
		printf("You have been added to the queue , please wait.\n");
}
void answercall()
{   
	int i;
	printf("There are %d calls wating to be answered\n", q1.rear + 1);
	getchar();
	for (; q1.front <= q1.rear; q1.front++)
	{   
		for (i = 0; i < nc; i++)
		{
			if (c[i].id == q1.arr[q1.front])
			{   
				printf("%s %s  id = %d ", c[i].name, c[i].number, c[i].id);
				printf("Your call is being answered. press any key to end the call");
				getchar();
				break;
			}
		}
	}
	if (q1.front == q1.rear + 1)
	{
		q1.front = q1.rear = -1;
	}	
	printf("There are no more calls to be answered. press any key to exit\n");
	getchar();
}
int main()
{

	int choice;
	char number[11];
	char name[40];
	q1.rear = q1.front = -1;
	while (1)
	{   
		printf("1.Call the helpline\n2.Employee answers the calls\n");
		scanf_s("%d", &choice);
		getchar();
		switch (choice)
		{
		case 1: printf("Enter your name and number\n");
			gets_s(name);
			gets_s(number);
			addcall(name,number);
			break;
		case 2: answercall();
			break;
		default: break;
		}
	}
	return 0;
}