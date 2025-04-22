#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d=0,a=0;
    cin>>n;
  string s;
  cin>>s;
  for(int i=0;i<n;i++)
  {
      if(s[i]=='D')
      {
          d++;
      }
      else
      {
          a++;
      }
  }
  if(d==a)
  {
      cout<<"Friendship";
  }
  else if(d>a)
  {
      cout<<"Danik";
  }
  else
  {
      cout<<"Anton";

  }
}
