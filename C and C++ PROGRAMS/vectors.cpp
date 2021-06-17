#include<iostream>
#include<vector>
using namespace std;
void fillvector(vector<int> *);
void reversevector(vector<int>&);
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
    fillvector(&vec);
    reversevector(vec);
    return 0;

}
void fillvector(vector<int> *newvec)//Pass by reference void fillvector(vector<int>& newvec)
{
    cout<<"enter the elements -1 to stop\n";
    int input;
    cin>>input;
    while(input!=-1)
    {
        newvec->push_back(input);
        cin>>input;
    }
    cout<<endl;
    for (int i =0;i<newvec->size();i++)
        cout<<newvec->at(i)<<" ";
    cout<<endl;
}
void reversevector(vector<int>& newvec)
{
    int i;
    for(i=newvec.size()-1;i>=0;i--)
        cout<<newvec[i]<<" ";
    cout<<endl;
}
