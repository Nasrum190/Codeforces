#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,v,t,sol=0;
    cin>>n;
  while(n)
  {
      cin>>p>>v>>t;
      if(p==1&&v==1 || p==1&&t==1 || v==1&&t==1 )
      {
          sol++;
      }

    n--;
  }
  cout<<sol;
}
