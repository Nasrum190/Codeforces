#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,c=1;
    double r;
    cin>>t;
    while(t)
    {
        cin>>r;
        double pi = 2 * acos (0.0);
        double res=((2*r)*(2*r))-(pi*r*r);
        cout<<"Case "<<c++<<": "<<fixed<<setprecision(2)<<res<<endl;
        t--;

    }
}
