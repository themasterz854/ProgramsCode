#include<stdio.h>
int bsearch(int [],int,int,int);
void main()
{
    int a[10],i,ele,pos,beg=0,end,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    end=n-1;
    printf("enter the element \n");
    scanf("%d",&ele);
    pos=bsearch(a,ele,beg,end);
    if(pos>=0)
        printf("Element found at %d",pos);
    else printf("Element not found");
}
int bsearch(int a[100],int e,int beg,int end)
{
    int mid;
    if(beg>end)
        return -1;
    mid=(beg+end)/2;
    if(e==a[mid])
        return mid;
     else if(e<a[mid])
        return bsearch(a,e,beg,mid-1);
    else return bsearch(a,e,mid+1,end);
}

