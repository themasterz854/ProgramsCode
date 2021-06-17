#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    char str[100],ch;
    int i,n,pos;
    gets(str);
    n=strlen(str);
    printf("Enter the character to be inserted and its position\n");
    scanf("%c%d",&ch,&pos);
    pos--;
    if(pos>n)
    {
        printf("ERROR");
        exit(0);
    }
    for(i=n;i>=pos;i--)
    {
        str[i+1]=str[i];
    }
    str[pos]=ch;
    puts(str);

}
