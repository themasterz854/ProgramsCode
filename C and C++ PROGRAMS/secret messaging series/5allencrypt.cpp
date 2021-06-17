#include<stdio.h>
#include<iostream>
#include<string.h>
#include<ctime>
#include<ctype.h>
#include<fstream>
#include<ios>
#include<thread>
void encrypt(char s[100], char fn[100],int flagt);
void decrypt(char s[100], char fn[100]);
int main()
{
    std::ifstream file;
    char filename[100];
    int ch1, ch2;
    char choice;
    char str[100];
    time_t start;
    std::cout << "1.Start the program 2.Exit\n";
    std::cin >> ch1;
    getchar();
    if (ch1 == 1)
    {
        while (1)
        {
        xyz:
            std::cout << "Enter the filename\n";
            std::cin.getline(str, 100);
            std::cin.clear();
            file.open(str,std::ios::in);
            if (!file.is_open())
            {
                std::cout << "File open error \n";
                goto xyz;
            }
            file.close();
            std::cout << "1.Encrypt the file\n2.Decrypt the file\n3.Quit\n";
            std::cin >> ch2;
            getchar();
            switch (ch2)
            {

            case 1: {
                std::cout << "Enter the filename for the encrypted file to be stored as (write default for default name)\n";
                std::cin.getline(filename, 100);
                if (!_strcmpi(filename,"default"))
                    strcpy_s(filename, "encrypted.txt");
                start = time(0);
                std::thread t1(encrypt, str, filename,1);
                std::thread t2(encrypt, str, filename,2);
                t1.join();
                t2.join();
                std::cout << time(0) - start;
                std::cout << "File encrypted successfully as " << filename << "\nDo you want to continue? y or n\n";
                while (1)
                {
                    std::cin >> choice;
                    getchar();
                    if (choice == 'y')
                        break;
                    else if (choice == 'n')
                        exit(0);
                }
                break;
            }
            case 2: {
                std::cout << "Enter the filename for the decrypted file to be stored as (write default for default name)\n";
                std::cin.getline(filename, 100);
                if (!_strcmpi(filename,"default"))
                    strcpy_s(filename, "decrypted.txt");
                decrypt(str, filename);
                std::cout << "File decrypted successfully as " << filename << "\nDo you want to continue? y or n\n";
                std::cin >> choice;
                getchar();
                if (choice == 'y')
                    break;
            }
            case 3:
            {
                exit(0);
            }
            default:
            {
                break;
            }
            }
        }
    }
    else
        exit(0);
    return 0;
}
void encrypt(char s[100], char fn[100],int flagt)
{  
    std::fstream fileR, fileW;
    fileR.open(s, std::ios::in);
    fileW.open(fn, std::ios::out);
    unsigned long int f, r = 0, w = 0, dsize = 0;
    fileR.seekg(0, std::ios::end);
    dsize = fileR.tellg();
    if (flagt == 2)
    {
        r = (dsize / 2) + 1;
        w = (1.3 * dsize) + 1 ;
    }
    fileR.seekg(0, std::ios::beg);
    fileR.seekg(r);
    fileW.seekp(w);
    char random1[10] = "!%*#(}]";
    char random2[10] = "@$^&)[\\";
    char random3[10] = "<>?:;_{|`";
    time_t counter = time(0);
    char c, en;
    fileR.read(&c, 1);
    while (flagt == 1 ? r <= (dsize / 2): !fileR.eof())
    {   
     
        if (c >= '0' && c <= '9')
        {
            switch (c)
            {
            case '1': en = 'u';
                break;
            case '2': en = 'L';
                break;
            case '3': en = 'z';
                break;
            case '4': en = 'A';
                break;
            case '5': en = 'n';
                break;
            case '6': en = 'P';
                break;
            case '7': en = 's';
                break;
            case '8': en = 'G';
                break;
            case '9': en = 'w';
                break;
            case '0': en = 'I';
                break;
            }
        }
        else if (c == ' ')
        {
            en = '\"';
        }
        else if (c == '\n')
        {
            c = '~';
            fileW.write(&c, 1);
            fileW.seekp(++w);
            r += 2;
            fileR.seekg(r);
            fileR.read(&c, 1);
            continue;
        }
        else if (c == '.')
        {
            en = '/';
        }
        else if (c == ',')
        {
            en = '=';
        }
        else
        {
            if (c >= 'a' && c <= 'z')
            {   
                
                fileW.write(random3+(counter % 9),1);
                fileW.seekp(++w);
                counter++;
            }
            if (c >= 'a' && c <= 'z')
                f = int(toupper(c)) - 16;
            else
                f = int(c) - 16;
            if ((f >= 58 && f < 67))
            {
                fileW.write(random1 + (counter % 7),1);
                fileW.seekp(++w);
                en = char(f - 9);
                counter++;
            }
            else if (f >= 67 && f <= 74)
            {
                fileW.write(random2 + (counter % 7),1);
                fileW.seekp(++w);
                en = char(f - 18);
                counter++;
            }
            else
                en = char(f);
        }
        fileW.write(&en,1);
        fileW.seekp(++w);
        fileR.seekg(++r);
        fileR.read(&c, 1);
        
    }
    fileR.close();
    fileW.close();
}
void decrypt(char s[100], char fn[100])
{
    std::fstream fileR3, fileW3;
    fileR3.open(s, std::ios::in);
    fileW3.open(fn, std::ios::out);
    fileR3.seekg(0, std::ios::end);
    unsigned long int dsize = 0;
    dsize = fileR3.tellg();
    fileR3.seekg(0, std::ios::beg);
    fileW3.seekp(0, std::ios::beg);
    unsigned long int r = 0, w = 0, f;
    char c;
    int flag,bflag;
    fileR3.read(&c, 1);
    time_t start = time(0);
    while (!fileR3.eof())
    {
        flag = 0;
        bflag = 0;
    
        if (c == '\"')
        {
            c = ' ';
            fileW3.write(&c, 1);
            fileR3.seekg(++r);
            fileW3.seekp(++w);
            fileR3.read(&c, 1);
            continue;

        }
        else if (c == '~')
        {
            c = '\n';
            fileW3.write(&c, 1);
            fileW3.seekp(++w);
            fileR3.seekg(++r);
            fileR3.read(&c, 1);
            continue;
        }
        else if (c == '/' ? c = '.' : (c == '=' ? c = ',' : 0))
        {
            
            fileW3.write(&c, 1);
            fileW3.seekp(++w);
            fileR3.seekg(++r);
            fileR3.read(&c, 1);
            continue;
        }
        if (c == '<' || c == '>' || c == '?' || c == ':' || c == ';' || c == '_' || c == '{' || c == '|' || c == '`')
        {
            flag = 1;
            fileR3.seekg(++r);
            fileR3.read(&c, 1);
        }
        if (c == '@' || c == '$' || c == '^' || c == '&' || c == ')' || c == '[' || c == '\\')
        {
            fileR3.seekg(++r);
            fileR3.read(&c, 1);
            f = int(c) + 16;
            c = char(f + 18);
        }
        else if (c == '!' || c == '#' || c == '%' || c == '*' || c == '(' || c == '}' || c == ']')
        {
            fileR3.seekg(++r);
            fileR3.read(&c, 1);
            f = int(c) + 16;
            c = char(f + 9);
        }
        else if (c >= '0' && c <= '9')
        {
            f = int(c) + 16;
            c = char(f);
        }
        else
        {
            switch (c)
            {
            case 'u': c = '1';
                break;
            case 'L': c = '2';
                break;
            case 'z': c = '3';
                break;
            case 'A': c = '4';
                break;
            case 'n': c = '5';
                break;
            case 'P': c = '6';
                break;
            case 's': c = '7';
                break;
            case 'G': c = '8';
                break;
            case 'w': c = '9';
                break;
            case 'I': c = '0';
                break;
            default:
                bflag = 1;
                break;
            }
        }
  
        if (bflag)
        {
            fileR3.seekg(++r);
            fileR3.read(&c, 1);
            continue;
        }
       if (flag && (c >= 'A' && c <= 'Z'))
           c = tolower(c);
        fileW3.write(&c, 1);
        fileW3.seekp(++w);
        fileR3.seekg(++r);
        fileR3.read(&c, 1);
    }
    std::cout << time(0) - start;
    fileR3.close();
    fileW3.close();
}