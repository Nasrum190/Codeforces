#include<bits/stdc++.h>
using namespace std;
int main()
{
    double t,a,sum=0;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        cin>>a;
        sum=sum+a;

    }
    double res=sum/(t*100);
    cout<<res*100;
}

