#include<stdio.h>
int *point();
void main()
{
int *a;
a=point();
printf("%d",a);
}
int *point(){
int b=10,a=20,*p;
if(a>b)
p=&a;
else
p=&b;
return p;
}
