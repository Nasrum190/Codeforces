#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t,a;
    cin>>t;
    while(t!=0)
    {
        cin>>a;
       string c;
       cin>>c;
        int x=count(c.begin(),c.end(),'0');
 if(x>=1)
 {
     cout<<"YES\n";
 }
 else
 {
     cout<<"NO\n";
 }
        t--;
    }
}

