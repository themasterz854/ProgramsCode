#include<stdio.h>
#include<conio.h>
void main()
{char str1[100],str2[100];
printf("Enter the string 1\n");
gets(str1);
gets(str2);
for(int i=0;str1[i]!='\0';i++);
   int j=0;
 while(str2[j]!='\0')
 {
  str1[i]=str2[j];
  i++;
  j++;
 }
 str1[i]='\0';
printf("%s",&str1);
getch();
}