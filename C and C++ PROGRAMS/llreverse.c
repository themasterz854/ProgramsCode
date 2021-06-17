#include<stdio.h>
#include<stdlib.h>
struct node{
	int ele;
struct node* next;
};
struct node* getnode(int ele)
{
	struct node* p;
	p = (struct node*)malloc(sizeof(struct node));
	p->next = NULL;
	p->ele = ele;
	return p;
}
struct node* insertend(struct node* h, int ele)
{  
	struct node  *p,*q;
	p = getnode(ele);
	if (h == NULL)
	{
		h = p;
	}
	else
	{   
		q = h;
		while (q->next != NULL)
		{
			q = q->next;
		}
		q->next = p;
	}
	return h;
}
int main()
{   
	int ch,ele;
	struct node *head = NULL,*p,*n,*c;
	while (1)
	{
		printf("1.insert\n2.display\n3.reverse\n");
		scanf("%d", &ch);
		getchar();
		switch (ch)
		{
		case 1: printf("Enter the element to be inserted\n");
			scanf("%d", &ele);
			getchar();
			head = insertend(head, ele);
			printf("item inserted\n");
			break;
		case 2:
			if (head == NULL)
			{
				printf("empty list\n");
			}
			else
			{
				for (p = head; p != NULL; p = p->next)
				{
					printf("%d ", p->ele);
				}
			}
			break;
		case 3:
			p = n = NULL;
			c = head;
			while (c != NULL)
			{
				n = c->next;
				c->next = p;
				p = c;
				c = n;
			}
			head = p;
			break;
		default: exit(0);
		}
	}
}