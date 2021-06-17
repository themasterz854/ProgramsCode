#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,j,flag;
clrscr();
scanf("%d",&n);
for(i=2;i<=n;i++)
{
 flag=1;
 for(j=2;j<=(i/2);j++)
 {
  if(i%j==0)
   {
    flag=0;
    break;
   }
 }
 if(flag)
 printf("%d\n",i);
}
getch();
}