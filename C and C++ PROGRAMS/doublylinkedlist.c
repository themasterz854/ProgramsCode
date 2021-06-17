#include<stdio.h>
#include<stdlib.h>

struct node {
	int info;
	struct node* prev, * next;
};
struct node* head;
struct node* getnode(int ele) {
	struct node* p;
	p = (struct node*)malloc(sizeof(struct node));
	p->info = ele;
	p->prev = NULL;
	p->next = NULL;	
	return p;
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
			printf("%d ", p->info);
			p = p->next;
		}

	}
}

void insertfront(int ele)
{
	struct node* p;
	p = getnode(ele);
	if (head == NULL)
	{
		head = p;
	}
	else
	{   
		p->next = head;
		head->prev = p;
		head = p;
	}
}
void deletefront()
{
	if (head == NULL)
	{
		printf("empty list\n");
	}
	else if (head->next == NULL)
	{
		printf("%d deleted\n", head->info);
		free(head);
		head = NULL;
	}
	else
	{
		head = head->next;
		printf("%d deleted\n", head->prev->info);
		free(head->prev);
		head->prev = NULL;
	}
}
void insertend(int ele)
{   
	struct node* p;
	p = getnode(ele);
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
void deleteend() {
	if (head == NULL)
		printf("empty list \n");
	else
	{
		if (head->next == NULL)
		{
			free(head);
			head = NULL;
		}
		else {
			struct node* p;
			p = head;
			while (p->next->next != NULL)
			{
				p = p->next;
			}
			printf("%d deleted \n", p->next->info);
			free(p->next);
			p->next = NULL;

			}
	}
}
int main() {
	head = NULL;
	int ele, ch;
	while (1) {
		printf("\n1.insert,2.delete,3.display: ");
		scanf_s("%d", &ch);
		switch (ch) {
		case 1: printf("\nenter ele: ");
			scanf_s("%d", &ele);
			insertfront(ele);
			display();
			break;
		case 2: deletefront();
			display();
			break;
		case 3: display();
			break;
		default: return 0;
		}
	}
	return 0;
}