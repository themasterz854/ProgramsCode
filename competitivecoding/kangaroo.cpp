#include<bits/stdc++.h>

using namespace std;

int main()
{   
    int n,i,j,ans,x,inside=0;
    vector<int> v;
    cin >> n;
    for(i=0;i<n;i++)
    {   
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    for(i=(n/2)-1,j=n-1;i >=0;i--)
    {
        if(2 * v[i] <= v[j])
        {
            inside++;
            j--;
        }
    }
    cout << n- inside;

}