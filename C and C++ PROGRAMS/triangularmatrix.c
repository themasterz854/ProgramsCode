#include<stdio.h>
#include<stdlib.h>
void main()
{
    int m,n,i,j,flag=1;
    printf("Enter the number of rows and columns of the matrix\n");
    scanf("%d%d",&m,&n);
    int a[m][n];
    if(m!=n)
    {
        printf("Not a square matrix");
        exit(0);
    }
        printf("Enter the elements of the matrix:\n");
        for(i=0;i<m;i++)
            for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);

        for(i=0;i<m;i++)
        for(j=0;j<n;j++)
        {if(i<j&&a[i][j]!=0)
            {flag=0;
             break;
            }
        }
         if(flag)
           {
            printf("The matrix is lower triangular\n");
            exit(0);
            }

       flag=1;
       for(i=0;i<m;i++)
            for(j=0;j<n;j++)
          {

           if(i>j&&a[i][j]!=0)
           {
               flag=0;
               break;
           }
          }
          if(flag)
          {
              printf("The matrix is upper triangular\n");
              exit(0);
          }

        else printf("Not a triangular matrix\n");
    }

