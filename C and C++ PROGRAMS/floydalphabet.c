#include<stdio.h>
void main()
{
    int i=0,n,count;
    for(n=1;n<=7;n++)
    {
         for(count=0;count<n&&i<26;count++,i++)
            printf("%c ",'a'+i);
         printf("\n");
    }
}
