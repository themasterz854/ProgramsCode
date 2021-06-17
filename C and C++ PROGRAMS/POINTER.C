#include<stdio.h>
#include<conio.h>
void main()
{
long a[10],i,*ptr,sum=0;
ptr=a;
clrscr();
for(i=0;i<3;i++)
{scanf("%d",&a[i]);
printf("%d\n",ptr);
sum+=*(ptr)++;
printf("%d\n",a[i]);
printf("%d\n",ptr);
}
printf("%d",sum);

getch();
}