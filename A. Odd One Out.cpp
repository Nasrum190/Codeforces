#include<iostream>
using namespace std;
int main()
{
    int t,a,b,c;
    cin>>t;
    while(t!=0)
    {
      cin>>a>>b>>c;
      if(a!=b && a!=c)
      {
          cout<<a<<"\n";
      }
      else if(b!=a && b!=c)
      {
          cout<<b<<"\n";
      }
      else
      {
          cout<<c<<"\n";
      }
        t--;
    }

}
