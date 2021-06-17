#include<stdio.h>
#include<iostream>
#include<string.h>
#include<stdlib.h>
using std::cout;
using std::cin;
void encrypt(char []);
void decrypt(char []);
int main()
{
int ch,i;
char str[1000];
while(1)
{
cout<<"1.Encrypt Message\n2.Decrypt Message\n3.Quit\n";
cin>>ch;
switch(ch)
{
    case 1 : cout<<"Enter the message to be encrypted\n";
    getchar();
    cin.getline(str,1000);
    encrypt(str);
    break;
    case 2 : cout<<"Enter the message to be decoded\n";
    getchar();
    cin.getline(str,1000);
    decrypt(str);
    break;
    case 3 : exit(0);
    break;
    default : cout<<"Invalid choice\n";
}
}
return 0;
}
void encrypt(char s[1000])
{
    int i;
    for(i=0;s[i]!='\0';i++)
       { if(s[i]==' ')
          continue;
         if(s[i]>='A'&&s[i]<'a')
        s[i]='Z'-(s[i]-'A');
        else
        s[i]='z'-(s[i]-'a');
       }
cout<<"The encrypted message is\n";
cout<<s<<"\n";
}
void decrypt(char s[1000])
{
    int i;
    for(i=0;s[i]!='\0';i++)
   {

    if(s[i]==' ')
    {cout<<' ';
    continue;
    }
    if(s[i]>='A'&&s[i]<'a')
          s[i]='A'+('Z'-s[i]);
        else
            s[i]='a'+('z'-s[i]);
   }
    cout<<"The decoded message is\n";
    cout<<s<<"\n";
}


