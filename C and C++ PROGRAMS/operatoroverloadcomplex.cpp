#include<iostream>
#include<stdio.h>
using namespace std;
class Complex
{
    float r,i;
public:
    void input();
    void show();
    Complex operator + (Complex* obj)
    {
        Complex res;
        res.r = this->r+obj->r;
        res.i = this->i+obj->i;
        return res;
    }
   
}obj1,obj2,obj3,*obj4;
void Complex::input()
{
    cout<<"Enter the complex number\n";
    cin>>r>>i;
}
void Complex::show()
{
    printf("The complex number is %+f%+fi\n",r,i);
}

int main()
{
obj1.input();
obj2.input();
obj4 = &obj2;
obj3 = obj1+obj4;
obj1.show();
obj2.show();
obj3.show();

}
