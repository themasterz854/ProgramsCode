#include<string.h>
#include<stdio.h>
void main()
{
 int i,n,pos,j,m;
 char str[5][100],temp[100];
 printf("Enter the number of strings and the strings \n");
 scanf("%d",&n);
 for(i=0;i<n;i++)
    scanf("%s",str[i]);
for(i=0;i<n-1;i++)
{
    pos=i;
    for(j=i+1;j<n;j++)
     if(strcmpi(str[j],str[pos])<0)
      pos=j;

strcpy(temp,str[pos]);
strcpy(str[pos],str[i]);
strcpy(str[i],temp);
}
printf("The sorted strings are \n");
for(i=0;i<n;i++)
printf("%s\n",str[i]);
}

