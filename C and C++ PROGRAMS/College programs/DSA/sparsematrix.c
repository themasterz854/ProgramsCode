#include<stdio.h>
#include<stdlib.h>


struct node {
	int ele, row, col;
	struct node  *next, *prev;
};

struct node* head;

struct node* getnode(int ele, int row, int col)
{
	struct node* p; 
	p = (struct node*)malloc(sizeof(struct node));
	p->ele = ele;
	p->row = row;
	p->col = col;
	p->next = NULL;
	p->prev = NULL;
	return p;
}

void insertend(int ele,int r,int c)
{
	struct node* p;
	p = getnode(ele,r,c);
	if (head == NULL)
		head = p;
	else
	{
		struct node* q;
		q = head;
		while (q->next != NULL)
		{
			q = q->next;
		}
		q->next = p;
		p->prev = q;
	}
}
void display()
{
	if (head == NULL)
		printf("empty list \n");
	else
	{
		struct node* p;
		p = head;
		while (p != NULL)
		{
			printf("%d ", p->ele);
			p = p->next;
		}

	}
}

void displaymatrix(int rn , int cn)
{   
	int i, j,flag;
	struct node* p;
	printf("The matrix is \n");
		for (i = 1; i <=rn; i++)
		{
			for (j = 1; j <=cn; j++)
			{   
				flag = 0;
			    p = head;
				while(p != NULL)
				{
					if ((i  == p->row )&& (j == p->col))
					{
						printf("%d ", p->ele);
						flag = 1;
						if(p->next != NULL)
						p->next->prev = p->prev;
						if(p->prev != NULL)
						p->prev->next = p->next;
						free(p);
					}
					else
					{
						p = p->next;
					}
				}
				if(!flag)
				{
					printf("0 ");
				}
				
			}
			printf("\n");
		}
}
int main()
{
	int i;
	int rn, cn,n;
	struct node* q;
	int ele ,r , c ;
	int flag = 1;
	while (1) {
        head = NULL;
		printf("Enter the number of rows and columns\n");
		scanf("%d%d", &rn, &cn);
		getchar();
		if (rn <= 0 || cn <= 0)
		{
			printf("Invalid indices");
			continue;
		}
		printf("Enter the number of non zero elements\n");
		scanf("%d",&n);
		getchar();
		if (n > 0)
			printf("Enter the non zero elements and their indices\n");
		for (i = 0; i < n; i++)
		{
			scanf("%d%d%d",&ele,&r,&c);
			getchar();
			if (r < 1 || c < 1 || r > rn || c > cn)
			{
				printf("Invalid indices. try again\n");
				i--;
				continue;
			}
			if (i > 0)
			{
				q = head;
				while (q != NULL)
				{
					if (q->row == r && q->col == c)
					{
						printf("Error there is already an element at that postition.Pls enter again\n");
						flag = 0;
						break;
					}
					q = q->next;
				}	
			}
			if (flag)
			{
				insertend(ele, r, c);
			}
			else
			{
				i--;
				flag = 1;
			}
		}
		printf("The linked list is \n");
		display();
		displaymatrix(rn, cn);
	}
}