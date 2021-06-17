#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{
char s[100];
int n,i,flag=1;
clrscr();

printf("Enter the string\n");
gets(s);
for(n=0;s[n]!='\0';n++);
for(i=0;i<n;i++)
 { s[i]=toupper(s[i]);
   s[n-1-i]=toupper(s[n-1-i]);
   if(s[i]!=s[n-1-i])
    {
     flag=0;
     printf("Not a palindrome");
     break;
    }
  }
 if(flag)
 printf("It is a palindrome");
getch();
}