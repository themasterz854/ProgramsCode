#include<stdio.h>
#include<stdlib.h>
void main()
{
    int m,n,i,j,flag;
    printf("Enter the range\n");
    scanf("%d%d",&m,&n);
    if(m==0||m==1||n==0||n==1)
    {
        printf("INVALID");
        exit(0);
    }
    for(i=m;i<=n;i++)
    {
        flag=1;
        for(j=2;j<=i/2;j++)
        if(i%j==0)
        {
            flag=0;
            break;
        }
        if(flag)
            printf("%d\n",i);
    }
}
