#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,flag=1;
    scanf("%d",&n);
    while(n!=1)
    {
        if(n%2!=0)
        {
            flag=0;
            printf("Not a power of 2");
            break;
        }
        n=n/2;
    }
    if(flag)
        printf("POWER OF 2");
}
