#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc,char* argv[])
{   
    int i,len,flag = 1;
    char str[100];
    strcpy(str,argv[1]);
    len = strlen(str);
    for(i=0;i<len;i++)
    {
        if(str[i] != str[len-1-i])
        {
            flag = 0;
            break;
        }
    }
    if(flag)
    printf("It is a palindrome\n");
    else
    {
        printf("It is not a palindrome\n");
    }
    
    exit(0);

}