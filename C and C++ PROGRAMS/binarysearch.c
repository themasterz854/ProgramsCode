#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{

    int temp,a[100],beg=0,end,mid,ele,pos=-1,n,i,j;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    end=n-1;
    printf("Enter the array elements\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=1;i<n;i++)
        for(j=0;j<n-i;j++)
        if(a[j+1]<a[j])
    {
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
    }
    printf("enter the element to be searched\n");
    scanf("%d",&ele);
    while(beg<=end)
    {
        mid=(beg+end)/2;
        if(ele==a[mid])
            {
                pos=mid;
                break;
            }
        else if(ele<a[mid])
            end=mid-1;
        else
            beg=mid+1;
    }
    if(pos<0)
        printf("element not present");
    else
        printf("element %d is present at %d",ele,pos+1);
}
