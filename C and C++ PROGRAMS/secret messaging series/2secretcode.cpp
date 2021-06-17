#include<stdio.h>
#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
using std::cout;
using std::cin;
void encrypt(char []);
void decrypt(char []);
int main()
{
int ch;
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
    int i,f,j;
    char st[1000];
    for(i=0,j=0;s[i]!='\0';i++,j++)
      {
          if(s[i]==' ')
            {st[j]=s[i];
            continue;
            }
          s[i] = toupper(s[i]);
          st[j]=s[i];
          f= int(st[j])-16;
          if ((f>=58 && f<67))
              {st[j] ='0';
              st[++j]= char(f-9);
              }
          else if(f>=67 && f<=74)
          {
              st[j]='0';
              st[++j]='0';
              st[++j]= char(f-18);
          }
          else
            st[j]= char(f);
      }
      st[j]='\0';
    cout<<"The encrypted message is\n";
    for(i=0;i<j;i++)
    cout<<st[i];
    cout<<"\n";
}
void decrypt(char s[1000])
{
    int i,j;
    j=0;
    char st[1000];
    for(i=0;s[i]!='\0';i++)
    {

        if (s[i]==' ')
        {
            st[j]=' ';
            j++;
            continue;
        }
       int f ;
       if (s[i]=='0')
        {
             if (s[i+1]=='0')
             {i+=2;
              f = int(s[i])+16;
             st[j]=char(f+18);
             j++;
             }
        else
        {   i++;
            f = int(s[i])+16;
            st[j]=char(f+9);
            j++;
        }
        }
        else
        {

            f = int(s[i])+16;
            st[j] = char(f);
            j++;
        }
    }
    st[j]='\0';
    cout<<"The decoded message is\n";
    puts(st);
    cout<<"\n";
}


