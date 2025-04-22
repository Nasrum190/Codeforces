#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t,sum=0;
    cin>>t;
    string s;
    while(t!=0)
    {
        cin>>s;

        if(s[0]=='T')
        {
            sum=sum+4;

        }
         if(s[0]=='C')
        {
            sum=sum+6;

        }
          if(s[0]=='O')
        {
            sum=sum+8;

        }
          if(s[0]=='D')
        {
            sum=sum+12;

        }
          if(s[0]=='I')
        {
            sum=sum+20;

        }
        t--;
    }
    cout<<sum;
}
