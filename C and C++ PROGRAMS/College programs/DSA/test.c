#include<stdio.h>
void main()
{
int a = 5 ;
int *b = &a ;
int **c = &b ;
printf("%d %d %d", a, *b, **c);
}