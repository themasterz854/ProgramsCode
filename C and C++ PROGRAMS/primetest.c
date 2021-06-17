#include<stdio.h>
#include<stdlib.h>
void main()
{
 int n,i,flag=1;
 scanf("%d",&n);
 for(i=2;i<=n/2;i++)
    if(n%i==0)
 {flag=0;
  break;
 }
if(flag)
{if(n>1)
    printf("It is a prime number ");

}
else printf("Not a prime number");
}
