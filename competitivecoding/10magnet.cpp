#include<bits/stdc++.h>

using namespace std;
int main(){
  int flag =0;
  int i,n;
  char sym[3];
  char curr[3];
  int gcount =1;
  cin >> n;
  for(i=0;i<n;i++)
  {   
      scanf("%s",curr);
      if(i == 0)
      { 
        strcpy(sym,curr);
      }
      if(strcmp(sym,curr) != 0)
      {
          gcount++;
          strcpy(sym,curr);
      }
  }
  cout << gcount;
}