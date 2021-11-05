#include<iostream>
using std::cout;
using std::cin;
int main()
{
    int x,y;
    cout<<"Enter the integer \n";
    cin>>x;
    cout<<"Enter the number by which is should be divisible\n";
    cin>>y;
    cout<<x+y-(x%y)<<"\n";
    cout<<y*((x/y)-1);
}
