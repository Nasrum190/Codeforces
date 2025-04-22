#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long int x,y;
    cin>>t;
    while(t!=0)
    {
        cin>>x>>y;

        long long res=(y+1)/2,x2=0;

        if(y%2==1)
        {
            x2=(y/2)*7+11;
        }
        else{
            x2=(y/2)*7;
        }
        if(x<=x2)
        {
            cout<<res<<endl;

        }
        else{
            long long res2=x-x2;
            cout<<res+(res2+14)/15<<endl;
        }

        t--;
    }
}
