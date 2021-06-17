#include<Stdio.h>
int main()
{
int array[10];
int i,sum=0,n;
int *ptr;
printf("Enter the size of array\n");
scanf("%d",&n);
printf("\nEnter the array elements");
for(i=0;i<n;i++)
scanf("%d",&array[i]);
ptr=array;
for(i=0;i<n;i++)
{
 sum=sum+*ptr;
 ptr++;
}
printf("\nThe sum is %d",sum);
return 0;
}