#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
void swap1(int *,int*);
int quicksort(int [],int , int);
int main()
{
int n,i,j,x,y;
cout<<"Enter the number of elements\n";
cin>>n;
int *a = new int[n];
cout<<"Enter the array elements\n";
for(i=0;i<n;i++)
    cin>>a[i];

j = quicksort(a,0,n);
x = quicksort(a,0,j);
y = quicksort(a,j,n);
for (i=0;i<n;i++)
    cout<<a[i]<<" ";
}
void swap1(int *a,int *b)
{
    int temp;
    temp = *a;
    *a=*b;
    *b=temp;
}
int quicksort(int *a,int l,int h)
{
    int i=l,j=h;
    int pivot;
    pivot = a[l];
    while(i<j)
    {
        while(a[i]<=pivot)
        {
            i++;
        }
        while(a[j]>=pivot)
        {
            j--;
        }
        swap1(a+i,a+j);
    }
    swap1(a+l,a+j);
    return j;

}
