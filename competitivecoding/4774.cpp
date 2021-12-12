#include <bits/stdc++.h>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    //cout << "Hello, Dcoder!";
    int n;
    cin >> n;
    vector<char> a,b;
    a.
    
    cin >> a >>b;
    int n7=0,n4=0;
    for(int i =0;i<n;i++)
    {
      if((b[i]!=a[i]) &&( b[i]=='7'))
        n7++;
      else if((b[i]!=a[i]) &&( b[i]=='4'))
        n4++;
    }
  //  cout << n4 << " "<< n7 << endl;
    //cout << a[1] << endl;
    
    if(n7>n4 && (n4 != 0))
    n4 = n7 - n4;
    else if(n7 <= n4 && n4!= 0 )
    n4 = n4 - n7;
  //  cout << n4 <<" "<< n7 << endl;
    n7 = n7 + n4;
    cout << n7;
    return 0;
 }