#include<stdio.h>
struct st
{
int USN;
char name[20];
}s1;
void main()
{
gets(s1.name);
printf("%s",s1.name);
}