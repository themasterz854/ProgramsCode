#include<stdio.h>
#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<ctime>
#include<ctype.h>
using std::cout;
using std::cin;
void encrypt(char [],char []);
void decrypt(char [],char []);
int main()
{
    char filename[100];
    FILE *check;
    int ch1,ch2;
    char choice;
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
     check = fopen(str,"r");
     if (check == NULL)
     {
         cout<<"Error file does not exist\n";
         goto xyz;
     }
     cout<<"1.Encrypt the file\n2.Decrypt the file\n3.Quit\n";
     cin>>ch2;
     getchar();
     switch(ch2)
     {

         case 1 :cout<<"Enter the filename for the encrypted file to be stored as (write default for default name)\n";
             cin.getline(filename,100);
             if (filename[0]=='d')
                strcpy_s(filename,"encrypted.txt");
             encrypt(str,filename);
         cout<<"File encrypted successfully as "<<filename<<"\nDo you want to continue? y or n\n";
         cin>>choice;
         getchar();
         if(choice=='y')
            break;
         else
            exit(0);
         case 2 : cout<<"Enter the filename for the decrypted file to be stored as (write default for default name)\n";
         cin.getline(filename,100);
         if (filename[0]=='d')
            strcpy_s(filename,"decrypted.txt");
         decrypt(str,filename);
         cout<<"File decrypted successfully as "<<filename<<"\nDo you want to continue? y or n\n";
         cin>>choice;
         getchar();
         if(choice=='y')
            break;
         else
            exit(0);
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
{   char ct;
    long long int cc=0,cj=0;
    FILE *pr,*pw;
    pr = fopen(s,"r");
    pw = fopen(fn,"w");

    while(!feof(pr))
    {
        ct = getc(pr);
        if((ct>='j'&& ct<='z') || (ct>='J' && ct<='Z'))
          cj++;
        cc++;
    }
    cout<<cc<<"\n"<<cj<<"\n";
    rewind(pr);
    char *st,*en;
    st = (char *) calloc(cc+2,sizeof(char));
    st[cc+1]='\0';
    en = (char *) calloc(cc+(2*cj)+1,sizeof(char));
    int i,f,j;
    char random1[6]="!%*#(";
    char random2[6]="@$^&)";
    long int counter = time(0);
    while(!feof(pr))
    {

        fscanf(pr,"%[^~]",st);
    for(i=0,j=0;st[i]!='\0';i++,j++)
      {
          if(st[i]>='0' && st[i]<='9')
        {
          switch(st[i])
          {
              case '1': en[j]='u';
              break;
              case '2': en[j]='L';
              break;
              case '3': en[j]='z';
              break;
              case '4': en[j]='A';
              break;
              case '5': en[j]='n';
              break;
              case '6': en[j]='P';
              break;
              case '7': en[j]='s';
              break;
              case '8': en[j]='G';
              break;
              case '9': en[j]='w';
              break;
              case '0': en[j]='I';
              break;
          }
          continue;
        }
          if(st[i]==' ')
           {
               en[j]=' ';
               continue;
           }
          if(st[i]=='\n')
          {
              en[j]='\n';
              continue;
          }
          st[i] = toupper(st[i]);
          en[j]=st[i];
          f= int(en[j])-16;
          if ((f>=58 && f<67))
              {en[j] =random1[counter%5];
              en[++j]= char(f-9);
              counter++;
              }
          else if(f>=67 && f<=74)
          {
              en[j]=random2[counter%5];
              en[++j]= char(f-18);
              counter++;
          }
          else
            en[j]= char(f);
      }
      en[j]='\0';
      fprintf(pw,"%s",en);
    }
    getchar();
    free(en);
    free(st);
fclose(pw);
fclose(pr);
}
void decrypt(char s[100],char fn[100])
{
    FILE *pr,*pw;
    int i,j,f,cc=0;
    char ct;
    pr = fopen(s,"r");
    pw = fopen(fn,"w");
    while(!feof(pr))
    {
        ct = getc(pr);
        cc++;
    }
    rewind(pr);
    char *st,*dec;
    st = (char *) calloc(cc+1,sizeof(char));
    st[cc]='\0';
    dec = (char *) calloc(cc,sizeof(char));
    while(!feof(pr))
    {
        fscanf(pr,"%[^~]",st);
    for(i=0,j=0;st[i]!='\0';i++,j++)
    {
        if (st[i]==' ')
        {
            dec[j]=' ';
            continue;
        }
        if (st[i]=='\n')
        {
            dec[j]='\n';
            continue;
        }
       if (st[i]=='@' || st[i]=='$' || st[i]=='^'|| st[i]=='&' || st[i]==')')
        {
            i++;
            f = int(st[i])+16;
             dec[j]=char(f+18);
             continue;
        }
        else if(st[i]=='!' || st[i]=='#' || st[i]=='%' || st[i]=='*' || st[i]=='(')
        {   i++;
            f = int(st[i])+16;
            dec[j]=char(f+9);
            continue;
        }
        switch(st[i])
        {
            case 'u': dec[j]='1';
            break;
            case 'L': dec[j]='2';
            break;
            case 'z': dec[j]='3';
            break;
            case 'A': dec[j]='4';
            break;
            case 'n': dec[j]='5';
            break;
            case 'P': dec[j]='6';
            break;
            case 's': dec[j]='7';
            break;
            case 'G': dec[j]='8';
            break;
            case 'w': dec[j]='9';
            break;
            case 'I': dec[j]='0';
            break;
            default:
                break;
        }
        if(dec[j]>='0' && dec[j]<='9')
            continue;
        else
        {
            f = int(st[i])+16;
            dec[j] = char(f);
        }
    }
    dec[j]='\0';
    fprintf(pw,"%s",dec);
    }
    free(dec);
    free(st);
fclose(pw);
fclose(pr);
}

