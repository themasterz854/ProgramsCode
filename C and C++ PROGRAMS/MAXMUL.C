#include<stdio.h>
#include<conio.h>
void main()
{
int m,n,x,y,a[10][10],b[10][10],c[10][10],i,j,k;
xyz:
printf("Enter the order of first matrix\n");
scanf("%d%d",&m,&n);
printf("Enter the matrix elements\n");
for(i=0;i<m;i++)
 for(j=0;j<n;j++)
 scanf("%d",&a[i][j]);

printf("Enter the order of second matrix\n");
scanf("%d%d",&x,&y);
 if(n!=x)
 {
  printf("CANNOT MULTIPLY SUCH MATRICES\n");
  goto xyz;
 }
printf("Enter the matrix elements\n");
for(i=0;i<x;i++)
for(j=0;j<y;j++)
scanf("%d",&b[i][j]);

for(i=0;i<m;i++)
for(j=0;j<y;j++)
c[i][j]=0;

for(i=0;i<m;i++)
for(j=0;j<y;j++)
for(k=0;k<n;k++)
c[i][j]+=a[i][k]*b[k][j];

printf("The resultant matrix is\n");
for(i=0;i<m;i++)
{
 for(j=0;j<y;j++)
 printf("%d ",c[i][j]);
 printf("\n");
}
getch();
}