#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,a;
    cin>>n>>t>>a;
    if(t==0 && a==0)
    {
        cout<<"No";
    }
    else if (t>a)
    {
        int r= n-(t+a);
        a=a+r;
        if(t>a)
        {
            cout<<"Yes";
        }
        else
        {
            cout<<"No";
        }
    }
    else if( a>t)
    {
        int r= n-(t+a);
        t=t+r;
        if(t<a)
        {
            cout<<"Yes";
        }
        else
        {
            cout<<"No";
        }
    }

}
