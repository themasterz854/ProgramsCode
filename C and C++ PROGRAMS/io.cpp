#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<fstream>
#include<iomanip>
#include<ios>
#include<iosfwd>
#include<istream>
#include<ostream>
#include<sstream>
#include<streambuf>
#include<strstream>
/* fstream ios::in , ios::out
   ofstream ios::out | ios::trunc
   ifstream ios::in
*/
using namespace std;
int main()
{
    char buffer;
    int n1,n2,index=0;
    fstream file;
    char str[1000];
    file.open("45.txt",ios::out| ios::binary);
    file << 1001 ;
    cout<<file.is_open()<<"\n";
    n1=file.tellg();
    file.seekg(0,ios::end);
    n2=file.tellg();
    cout<<"\n"<<n2-n1;
    file.close();
    fstream test1("test1.txt",ios::out);
    fstream test("test.txt",ios::in);
    test.seekg(0,ios::beg);
    test1.seekp(0,ios::beg);
    if(test.is_open() && test1.is_open())
    {
        test.read(&buffer,1);
        while(!test.eof())
        {
        test1.write(&buffer,1);
        index++;
        test.seekg(index);
        test1.seekp(index);
        test.read(&buffer,1);
        }
    }
    test.close();
    test1.close();

return 0;
}
