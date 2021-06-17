#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<iostream.h>
class String
{
char str[100];
public:
String(){
strcpy(str," ");}
String(char s[])
{
 strcpy(str,s);
}
void display()
{
cout<<str;
}
String operator + (String su)
{ String temp;
strcpy(temp.str,str);
strcat(temp.str,su.str);
return temp;
}
};

void main()
{
String s1 = "HELLO";
String s2("ZAID");
String s3;
s3=s1+s2;
s3.display();
getch();
}
