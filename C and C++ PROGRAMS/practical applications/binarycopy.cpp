#include<iostream>
#include<fstream>
#include<ios>
#include<ctime>
using namespace std;
void filecopy(char sf[100],char sd[100]);
int main()
{
    fstream file;
    char fname[100],dname[100];
    xyz:
    cout<<"Enter the name of the file to be copied\n";
    cin.getline(fname,100);
    file.open(fname, ios::in);
    if (!file.is_open())
    {
        cout << "File open error \n";
        goto xyz;
    }
    cout<<"Enter the name for the file to be downloaded as\n";
    cin.getline(dname,100);
    filecopy(fname,dname);
    return 0;
}
void filecopy(char sf[100],char sd[100])
{
    int dsize = 0;
    char c[1000];
    char ch;
    long long int r=0,w=0,x=0;
    ifstream fileR;
    ofstream fileW;
    fileR.open(sf,ios::binary);
    fileW.open(sd,ios::binary);
    fileR.read(&ch,1);
    while(!fileR.eof() && dsize<=1000)
    {
        dsize++;
        fileR.seekg(++r);
        fileR.read(&ch,1);
    }
    r=0;
    fileR.clear();
    fileR.seekg(0,ios::end);
    streamoff endpoint = fileR.tellg();
    fileR.seekg(0,ios::beg);
    time_t start = time(0);
    if (dsize<1001)
    {
       fileR.read(&ch,1);
        while(!fileR.eof())
        {

            fileW.write(&ch,1);
            fileW.seekp(++w);
            fileR.seekg(++r);
            fileR.read(&ch,1);
        }
      fileW.write(&ch,1);
    }
    else
    {
    fileR.read(c,1000);
    while(!fileR.eof())
    {
        fileW.write(c,1000);
        w+=1000;
        fileW.seekp(w);
        r+=1000;
        fileR.seekg(r);

        if(endpoint - fileR.tellg() < 1000)
        {
            x = endpoint - fileR.tellg();
            fileR.read(c, x);
            break;
        }
        else
        {
            fileR.read(c, 1000);
        }
    }
    fileW.write(c,x);
    }
    fileR.close();
    fileW.close();
    cout<<time(0)-start;
    getchar();
}
