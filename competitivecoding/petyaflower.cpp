#include<bits/stdc++.h>

using namespace std;

int main()
{
    int die,tc,t;
    vector<int> v;
    int j,i,i1,i2,n=0;
    int height;
    cin >> t;
    for(tc=0;tc<t;tc++)
    {
    v.clear();
    die = 0;
    height = 1;
    i = 2;
    cin >> n;
    if(n == 0)
    { 
      cout << 1;
      continue;
    }
    for(j=0;j<n;j++)
    { 
      cin >> i;
      v.push_back(i);
    }
    if(v[0] == 1)
    {
      height+=1;
    }
    for(j=1;j<n;j++)
    {   
        if(v[j-1] == 0 && v[j] == 0)
        {
          die =1;
          break;
        }
         if(v[j-1] == 1 && v[j] == 1)
        {
            height+= 5;
        }
        else if(v[j] == 1)
        height += 1;
    }
  if(!die)
  {
    cout << height << endl;
  }
  else
  {
  cout << -1 << endl;
  }
}
}