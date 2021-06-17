#include<iostream>
#include<stdio.h>

using namespace std;
int main()
{
    double* myInt = new double[100000];
    cout<<"memory allocated";
    for(int i=0;i<100000;i++)
    {myInt[i]=400+i;
    cout<<*(myInt+i)<<endl;
    }
    getchar();
    delete[] myInt;
    cout<<"memory deallocated";
return 0;
}
