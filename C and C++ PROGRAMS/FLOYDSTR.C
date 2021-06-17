#include<stdio.h>
void main()
{
int i=1,n,count;
 for(n=1;n<=5;n++)
 {
  count=0;
  for(;i<=15;i++)
  { if(count==n)
    break;
    printf("%d ",i);
    count+=1;
  }
  printf("\n");
 }
}