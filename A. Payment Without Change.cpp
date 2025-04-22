#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,n,s;
    cin>>t;
    while(t)
    {
        cin>>a>>b>>n>>s;
        int actual=s/n;
        actual=min(a,actual);
        if((s-(actual*n)<=b))
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        t--;
    }
}
