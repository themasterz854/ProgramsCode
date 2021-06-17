#include<iostream>
#include<conio.h>
using std::cout,std::cin,std::endl;
long double power(double,int=2);
int main()
{
double n;
int p;
cout<<endl;
cin>>n ;
cout<<power(n) ;
return 0;
}
long double power(double n,int p)
{
int c=1;
long double pn=n;
 while(c<p)
 {
  pn*=n;
  c++;
 }
return pn;
}
