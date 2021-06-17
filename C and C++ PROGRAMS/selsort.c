#include<stdio.h>
#include<stdlib.h>
int i,j,n,a[10],pos,temp;
void input()
{
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
}
void output()
{
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
}
void selsort()
{
    for(i=0;i<n-1;i++)
    {
        pos=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]>a[pos])
                pos=j;
        }
        temp=a[i];
        a[i]=a[pos];
        a[pos]=temp;
    }
}
void main()
{
    printf("Enter the value of n\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
    input();
    printf("The given array is \n");
    output();
    selsort();
    printf("\nThe sorted array is \n");
    output();
}
