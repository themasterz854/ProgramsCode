#include<stdio.h>
void main()
{
int a[10],i,n,j,temp;
scanf("%d",&n);
for(i=0;i<n;i++)
    scanf("%d",&a[i]);
for(i=0;i<n-1;i++)
{
    for(j=i;j>=0;j--)
    if(a[j+1]<a[j])
    {
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
    }

}
printf("The sorted array is \n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
}

