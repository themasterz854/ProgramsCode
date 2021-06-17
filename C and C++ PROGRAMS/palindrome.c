#include<stdio.h>
#include<string.h>
void chkstr(char []);
void main()
{
  char s[100];
  gets(s);
  chkstr(s);
}
void chkstr(char str[100])
{
    int i,n,flag=1;
    n=strlen(str);
    for(i=0;i<n;i++)
       if(str[i]!=str[n-1-i])
        {
            flag=0;
            printf("NOT A PALINDROME");
            break;
        }

   if(flag)
    printf("IT is a palindrome");

}
