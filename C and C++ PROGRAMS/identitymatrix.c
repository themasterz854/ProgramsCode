#include<stdio.h>
#include<math.h>
void main()
{
    int i,j,a[5][5],m,n,flag=1;
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
for(i=0;i<m;i++)
{    for(j=0;j<n;j++)
{
    if(i==j)
    {    if(a[i][j]!=1)
      {
        flag=0;
        break;
      }
    }
    else if(a[i][j]!=0)
    {
        flag=0;
        break;
    }
    else
        continue;
}
}
if(flag)
    printf("it is identity matrix");
else
    printf("NOT A identity matrix");
}
