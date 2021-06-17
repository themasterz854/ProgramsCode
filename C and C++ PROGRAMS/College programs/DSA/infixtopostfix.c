#include<stdio.h>
#include<ctype.h>
#define MAX 50
struct Stack {
	int a[MAX];
	int top;
};

void push(struct Stack* s, char ele)
{
	if (s->top == MAX - 1)
	{
		printf("Stack overflow\n");
		return;
	}
	s->a[++s->top] = ele;

}
char pop(struct Stack* s)
{
	char x;
	if (s->top == -1)
	{
		printf("Stack underflow\n");
		return 0;
	}
	x = s->a[s->top--];
	return x;
}
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

int main()
{
	struct Stack opstack;
	opstack.top = -1;
	char in[100], out[100], choice;
	int i, j, operandcount, operatorcount;
	int flag, pcount;
	while (1)
	{
		flag = 1, pcount = 0, operandcount = 0, operatorcount = 0;
		j = 0;
		printf("Enter the infix expression\n");
		gets(in);
		for (i = 0; in[i] != '\0'; i++)
		{
			if (isalnum(in[i]))
			{   
				operandcount++;
				if (isalnum(in[i + 1]))
				{   
					
					printf("INVALID(continous operand)\n");
					flag = 0;
					break;
				}
			}
			else if (in[i] != '(' && in[i] != ')')
			{   
				operatorcount++;
				if (in[i + 1] == '(' || in[i + 1] == ')')
				{   
					i++;
					continue;
				}
				if (!isalnum(in[i + 1]))
				{   
					printf("%c\n", in[i + 1]);
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
		else if (operatorcount != operandcount - 1)
		{
			printf("INVALID\n");
		}
		else {
			for (i = 0; in[i] != '\0'; i++)
			{
				if (isalnum(in[i]))
				{
					out[j] = in[i];
					j++;
				}
				else
				{
					if (in[i] == ')' && pcount == 0)
					{
						printf("extra parenthesis\n");
						flag = 0;
						break;
					}
					if (in[i] == '(')
					{
						pcount++;;
					}

					while (opstack.top != -1 && prec(opstack.a[opstack.top], in[i]))
					{
						out[j] = pop(&opstack);
						j++;
					}
					if (opstack.top == -1 || in[i] != ')')
					{
						push(&opstack, in[i]);
					}
					else if (in[i] == ')')
					{
						pop(&opstack);
						pcount--;
					}

				}
			}
			if (pcount)
			{
				flag = 0;
				printf("missing parenthesis\n");
			}
			if (flag)
			{
				while (opstack.top != -1)
				{
					out[j] = pop(&opstack);
					j++;
				}
				out[j] = '\0';
				puts(out);
			}
			else
			{
				while (opstack.top != -1)
					pop(&opstack);
			}
		}
		printf("\ncontinue?\n ");
		scanf("%c", &choice);
		getchar();
		if (choice == 'n')
		{
			break;
		}
	}
}
