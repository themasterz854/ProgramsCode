#include<stdio.h>
#define SIZE 60
struct student {
char name[30];
char USN[20];
int sub[10];
};
void main()
{
int i,j,max,count,total,n,a[SIZE],ni;
float avg;
struct student st[SIZE];
printf("Enter how many students\n");
scanf("%d",&n);
for(i=0;i<n;i++)
 {
  printf("Enter name and USN for student %d:",i);
  scanf("%s",&st[i].name);
  scanf("%s",&st[i].USN);
 }
for(i=0;i<n;i++)
 {
  for(j=0;j<=2;j++)
   {
    printf("\nEnter the marks of student %d for subject %d:",i,j);
    scanf("%d",&st[i].sub[j]);
   }
  }
for(i=0;i<n;i++)
 {
  total=0;
  for(j=0;j<3;j++)
   total+=st[i].sub[j];
  printf("Total marks obtained by the student %s are %d\n",st[i].name,total);
  a[i]=total;
 }
total=0;
for(i=0;i<n;i++)
total+=a[i];
avg=total/(n*3);
printf("\n Average Marks obtained by students %f\n",avg);
for(j=0;j<n;j++)
 {
  max=0;
  for(i=0;i<n;i++)
   {
    if(st[i].sub[j]>(avg/3))
    {
     max=st[i].sub[j];
     ni=i;
     printf("\nStudent %s got more than average marks = %d in subject %d",st[ni].name,max,j);
    }
    else
    printf("\nStudent %s got less than average marks = %d in subject %d",st[ni].name,max,j);
   }
 }
max=0;
for(i=0;i<n;i++)
{
 if(a[i]>max)
 {
  max=a[i];
  ni=i;
 }
}
printf("\n%s obtained the highest total marks.",st[ni].name);
}
