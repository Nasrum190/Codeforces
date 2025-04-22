#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a1,b1,a2,b2,a3,b3,a4,b4;
    cin>>t;
    while(t!=0)
    {
    cin>>a1>>b1;
    cin>>a2>>b2;
    cin>>a3>>b3;
    cin>>a4>>b4;
 long long int res = max(max(abs(a1 - a2), abs(a2 - a3)), max(abs(a3 - a4), abs(a4 - a1)));
        cout<<res*res<<"\n";
        t--;
    }
}
