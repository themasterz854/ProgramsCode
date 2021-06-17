#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
char str[100];
int i,j,n,b[100],temp;
gets(str);
n=strlen(str);
for(i=0;i<n;i++)
b[i]=(int)str[i];
for(i=1;i<n;i++)
    for(j=0;j<n-i;j++)
    if(b[j+1]<b[j])
    {
        temp=b[j];
        b[j]=b[j+1];
        b[j+1]=temp;
    }
printf("The sorted string is \n");
for(i=0;i<n;i++)
    printf("%c",b[i]);

}
