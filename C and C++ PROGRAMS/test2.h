#include<string.h>
#include<iostream>
class String
{
    char str[1000];
public:
    void getstring();
    String operator + (String strobj)
    {
        String res;
        strcpy(res.str,strcat(str,strobj.str));
        return res;
    }
    void showstring();
};
void String::getstring()
{
std::cout<<"enter the string \n";
    gets(str);
}
void String::showstring()
{
    std::cout<<str<<std::endl;
}
