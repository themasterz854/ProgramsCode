#include<stdio.h>
int fibo(int);
void main()
{
    int n,i,result;
    scanf("%d",&n);
    if(n<0)
    printf("NOT possible");
    else
    {
        printf("the fibbonacci series is \n");
        for(i=0;i<n;i++)
        {
            result=fibo(i);
            printf("%d ",result);
        }

    }
}
int fibo(int n)
{
    if(n==0)
        return 0;
    if(n==1)
    return 1;
    else
    return fibo(n-1)+fibo(n-2);
}
