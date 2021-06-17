#include<stdio.h>
#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<ctime>
#include<ctype.h>
#include<fstream>
#include<ios>
using namespace std;
void encrypt(char s[100],char fn[100]);
void decrypt(char s[100],char fn[100]);
int main()
{
    ifstream file;
    char filename[100];
    int ch1, ch2;
    char choice='a' ;
    char str[100];
     cout<<"1.Start the program 2.Exit\n";
     cin>>ch1;
     getchar();
     if (ch1==1)
     {
    while(1)
    {
        xyz:
     cout<<"Enter the filename\n";
     cin.getline(str,100);
     file.open(str,ios::in);
     if( !file.is_open())
     {
         cout<<"File open error \n";
         goto xyz;
     }
     file.close();
     cout<<"1.Encrypt the file\n2.Decrypt the file\n3.Quit\n";
     cin>>ch2;
     getchar();
     switch(ch2)
     {

         case 1 :cout<<"Enter the filename for the encrypted file to be stored as (write default for default name)\n";
             cin.getline(filename,100);
             if (filename[0]=='d')
                strcpy_s(filename,100,"encrypted.txt");
             encrypt(str,filename);
         cout<<"File encrypted successfully as "<<filename<<"\nDo you want to continue? y or n\n";
         while(choice!='y' || choice!='n')
        { cin>>choice;
         getchar();
         if(choice=='y')
            break;
         else if (choice=='n')
            exit(0);
        }
        break;
         case 2 : cout<<"Enter the filename for the decrypted file to be stored as (write default for default name)\n";
         cin.getline(filename,100);
         if (filename[0]=='d')
            strcpy_s(filename,100,"decrypted.txt");
         decrypt(str,filename);
         cout<<"File decrypted successfully as "<<filename<<"\nDo you want to continue? y or n\n";
         cin>>choice;
         getchar();
         if(choice=='y')
            break;
         case 3 : exit(0);
         default:break;
     }
     }
     }
     else
        exit(0);
     return 0;
    }

void encrypt(char s[100],char fn[100])
{
    fstream fileR,fileW;
    fileR.open(s,ios::in);
    fileW.open(fn,ios::out);
    int r=0,f,w=0;
    char c;
    char random1[10]="!%*#(}]";
    char random2[10]="@$^&)[\\";
    char random3[10]="<>?:;_{|`";
    long int counter = time(0);
    fileR.seekg(0,ios::beg);
    fileW.seekp(0,ios::beg);
    fileR.read(&c,1);
    double start = time(0);
    while(!fileR.eof())
    {
          if(c>='0' && c<='9')
        {
          switch(c)
          {
              case '1': c='u';
              break;
              case '2': c='L';
              break;
              case '3': c='z';
              break;
              case '4': c='A';
              break;
              case '5': c='n';
              break;
              case '6': c='P';
              break;
              case '7': c='s';
              break;
              case '8': c='G';
              break;
              case '9': c='w';
              break;
              case '0': c='I';
              break;
          }
        }
          else if(c==' ')
           {
             c = ' ';
           }
           else if(c=='\n')
           {
              fileW.write(&c,1);
              fileW.seekp(++w);
              r += 2;
              fileR.seekg(r);
              fileR.read(&c,1);
              continue;
           }
          else if(c=='.')
          {
              fileW.write(&c,1);
              fileW.seekp(++w);
              fileR.seekg(++r);
              fileR.read(&c,1);
              continue;
          }
          else
          {
            if(c>='a' && c<='z')
          {
              fileW.write(random3+(counter%9),1);
              fileW.seekp(++w);
              counter++;
          }
          if(c>='a' && c<='z')
          f= int(toupper(c))-16;
          else
            f = int(c)-16;
          if ((f>=58 && f<67))
              {  fileW.write(random1+(counter%7),1);
                w++;
              c = char(f-9);
              counter++;
              }
          else if(f>=67 && f<=74)
          {
              fileW.write(random2+(counter%7),1);
              w++;
              c = char(f-18);
              counter++;
          }
          else
            c = char(f);
          }
     fileW.seekp(w);
     fileW.write(&c,1);
     fileW.seekp(++w);
     fileR.seekg(++r);
     fileR.read(&c,1);
    }
cout<<time(0)-start<<"\n";
fileR.close();
fileW.close();
}
void decrypt(char s[100],char fn[100])
{
    fstream fileR,fileW;
    fileR.open(s,ios::in);
    fileW.open(fn,ios::out);
    fileR.seekg(0,ios::beg);
    fileW.seekp(0,ios::beg);
    int r=0,w=0,f;
    char c;
    int flag;
    fileR.read(&c,1);
    double start=time(0);
    while(!fileR.eof())
    {
        flag=0;
        if (c==' ')
        {
          c=' ';
        }
        else if (c=='\n')
        {
         fileW.write(&c,1);
         fileW.seekp(++w);
         fileR.seekg(r+=2);
         fileR.read(&c,1);
         continue;
        }
        else if(c=='.')
        {
              fileW.write(&c,1);
              fileW.seekp(++w);
              fileR.seekg(++r);
              fileR.read(&c,1);
              continue;
        }
        if(c=='<' || c=='>' || c=='?' || c==':' || c==';' || c=='_' || c=='{' || c=='|' || c=='`')
            {
                flag=1;
                fileR.seekg(++r);
                fileR.read(&c,1);
            }
        if (c=='@' || c=='$' || c=='^'|| c=='&' || c==')' || c=='['|| c=='\\')
        {
            fileR.seekg(++r);
            fileR.read(&c,1);
            f = int(c)+16;
            c=char(f+18);
        }
        else if(c=='!' || c=='#' || c=='%' || c=='*' || c=='(' || c=='}' || c==']')
        {
            fileR.seekg(++r);
            fileR.read(&c,1);
            f = int(c)+16;
            c=char(f+9);
        }
        else if(c>='0' && c<='9')
            {
                f =int(c)+16;
                c = char(f);
            }
          else
          {switch(c)
            {
                case 'u': c='1';
                break;
                case 'L': c='2';
                break;
                case 'z': c='3';
                break;
                case 'A': c='4';
                break;
                case 'n': c='5';
                break;
                case 'P': c='6';
                break;
                case 's': c='7';
                break;
                case 'G': c='8';
                break;
                case 'w': c='9';
                break;
                case 'I': c='0';
                break;
                default:
                    break;
            }
          }
        if(flag && (c>='A' && c<='Z'))
         c=tolower(c);
        fileW.write(&c,1);
        fileW.seekp(++w);
        fileR.seekg(++r);
        fileR.read(&c,1);
     }
    cout<<time(0)-start;
fileR.close();
fileW.close();
}

