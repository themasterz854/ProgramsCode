#include<iostream>
using std::cout;
using std::cin;
class tollBooth
{
private: unsigned int tnc;
	 double money;
public: tollBooth(): tnc(0),money(0){};
void payingcar();
void nopaycar();
void display();
};
void tollBooth::payingcar(){
tnc++;
money+=0.5;
}
void tollBooth::nopaycar(){
tnc++;
}
void tollBooth::display()
{
cout<<"TOTAL NUMBER OF CARS = "<<tnc<<"\nTOTAL MONEY = "<<money;
}
int main()
{
tollBooth counter;
char ch;
cout<<"Enter the car\n";
while(1)
{
cin>>ch;
if(ch=='p')
counter.payingcar();
else if(ch=='n')
counter.nopaycar();
else
break;
}
counter.display();
return 0;
}
