#include <stdio.h>

int main()
{
    int n,number,product = 1,x,y=0,j;
    printf("Enter a number: ");
    scanf("%d",&n);
    getchar();
    number = n;
    while(1)
    {
       while(n>0)
       {
           j = n%10;
           product = product * j;
           n = n/10;
       }
       y+=1;
       if (product>=10)
       {
           n = product;
           product = 1;
       }
       else
       {
         x = product;
         break;
       }
    }
      printf("\nX of %d equals %d \nY of %d equals %d ",number,x,number,y);
 }


