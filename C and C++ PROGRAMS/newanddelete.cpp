#include<iostream>
using std::cout;
using std::cin;
using std::endl;
int main()
{


    int n,i;
    cout<<"Enter the size of array";
    cin>>n;
    getchar();
    int* a = new int[n];

    cout<<"array created";
    for(i=0;i<n;i++)
        a[i]=i;
    getchar();
    delete a;
    return 0;
}
