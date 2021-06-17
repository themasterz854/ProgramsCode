#include<stdio.h>
#include<ctype.h>
#include<math.h>
#include<string.h>
#define MAX 50
struct Stack
{
    double a[MAX] ;
	int top=-1;  // in C , we can't initialize like this
}s;
void push(double c)
{
	s.a[++s.top] =  c;
}
double pop()
{
	return s.a[s.top--];
}
int main()
{   
	int i,len;
	double op1, op2, final;
	char str[100];
	printf("Enter the expression\n");
	gets_s(str);
	len = strlen(str);
	for (i = 0; i < len; i++)
	{
		if (isdigit(str[i]))
		{
			push(str[i] - '0');
		}
		else
		{
			op2 = pop();
			op1 = pop();
			switch (str[i])
			{
			case '+':
				push(op1 + op2);
				break;
			case '-':
				push(op1 - op2);
				break;
			case '*':
				push(op1 * op2);
				break;
			case '/':
				push(op1 / op2);
				break;
			case '^':
				push(pow(op1,op2));
				break;
			}
		}
	}
	final = pop();
	printf("The final answer is %lf", final);
}