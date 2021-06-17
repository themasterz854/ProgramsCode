#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n,i,j,k,m;
    scanf("%d", &n);
    m = (2*n) -1;
  	// Complete the code to print the pattern.
     for(i=0;i<m;i++)
     {  
         if(i>=n)
         {
             k = m-1-i;
         }
         else {
          k = i;
         }
        for(j=0;j<k;j++)
        {
            printf("%d ",n-j);
        }
        for(;j<m-1-k;j++)
        {
            printf("%d ",n-k);
        }
        for(;j<m;j++)
        {
            printf("%d ",j-n+2);
        }
        printf("\n");
     }
    return 0;
}