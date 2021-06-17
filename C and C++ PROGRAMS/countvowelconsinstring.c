#include<stdio.h>
#include<string.h>
void main()
{
    char str[100];
    int a,e,i,o,u,c,w;
    a=e=i=o=u=c=w=0;
    int k;
    gets(str);
    for(k=0;k<strlen(str);k++)
    {
        if(str[k]=='a'||str[k]=='A')
            a++;
        else if(str[k]=='e'||str[k]=='E')
            e++;
        else if(str[k]=='i'||str[k]=='I')
            i++;
        else if(str[k]=='o'||str[k]=='O')
            o++;
        else if(str[k]=='u'||str[k]=='U')
            u++;
        else if(('A'<str[k]&&str[k]<='Z')||('a'<str[k]&&str[k]<='z'))
            c++;
        else if(str[k]==' ')
            w++;
    }
        printf("a %d\ne %d\ni %d\no %d\nu %d\nconsonant %d\nwhitespace %d\n",a,e,i,o,u,c,w);
}
