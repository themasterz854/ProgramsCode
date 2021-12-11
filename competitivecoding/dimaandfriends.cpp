#include<bits/stdc++.h>

using namespace std;

int main()
{

    int i,sum =0,n,x,ans=0;
    cin >> n;
    for(i=0;i<n;i++)
    {
      cin >> x;
      sum += x;
    }
    for(i=1;i<=5;i++)
    {
      if(((sum+i) % (n+1)) != 1 )
      {
        ans++; 
      }   
    }
    cout << ans;
    
}