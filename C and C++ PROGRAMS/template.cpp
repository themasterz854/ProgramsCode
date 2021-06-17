#include<iostream>
using namespace std;

template<class T = int> T add(T , T);
template<class T = int> class Storage
{
    T a = 0.5;
 public:
    Storage();
    T display();

};
template<class T> Storage<T>::Storage()
{
    cout<<"CONstructor\n";
}
template<class T> T Storage<T>::display()
{
    return a;
}
template<class T> T add(T a,T b)
{
    return a+b;
}
template<class C, class T> C cast(T a)
{
return (C)a;
}
typedef Storage<float> flstore;
int main()
{
    Storage<> i;
flstore f;
cout<<f.display()<<endl;
cout<<add<float>(5.5,3)<<endl;
cout<<cast<int>(3.5);
}
