#include<iostream>
#include<vector>
using namespace std;

int main()
{
    /*Format vector<Data Type> nameofvector

    vec.push_back(value) also resizes it

    vec.size()

    vec.at[index];

    vec.begin() reads element from beginngin

    vec.insert(vec.begin()+ integer, new value) adds element before specified index number

    vec.erase(vec.begin()+integer) removes element at specified index

    vec.clear() removes all elements in vector

    vec.empty() returns boolean value if vector is empty

    */

    vector<int> vec;
    vec.push_back(3);
    vec.push_back(6);
    vec.push_back(4);
    cout << "Vector : ";
    for(unsigned int i = 0; i < vec.size();i++) //vec.size() returns unsigned int
    {
        cout<< vec[i]<<" " ;
    }
    vec.insert(vec.begin()+2, 5);
    cout<<endl;

     cout << "Vector : ";
    for(unsigned int i = 0; i < vec.size();i++) //vec.size() returns unsigned int
    {
        cout<< vec[i]<<" " ;
    }

    vec.erase(vec.begin()+2);

    cout<<endl;
    cout << "Vector : ";
    for(unsigned int i = 0; i < vec.size();i++) //vec.size() returns unsigned int
    {
        cout<< vec[i]<<" " ;
    }
    cout<<endl;
    cout<< vec.empty()<<endl;
    vec.clear();
    cout<< vec.empty()<<endl;
    return 0;
}
