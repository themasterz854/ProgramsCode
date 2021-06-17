#include<stdio.h>
#include<string.h>
void main()
{
 int n,i,flag=1;
 char num[100];
 gets(num);
 n=strlen(num);
 for(i=0;i<n;i++)
    if(num[i]!=num[n-1-i])
 {
     flag=0;
     printf("not a palindrome");
     break;
 }
 if (flag)
    printf("PALINDROME");
}
