#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    int n,i,l;
   cin>>n ;
   string s;
   for (i=0;i<n;i++)
   {
      cin>>s;
      l=s.length();
      if(l>10)
      {
          cout<<s[0]<<s.length()-2<<s[s.length()-1]<<endl;
      }
      else{
        cout<<s<<endl;
      }



   }


}
