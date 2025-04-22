#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,d,c=0,cs=1;
    cin>>t;
    while(t)
    {
        d=0;
        cin>>a;

        while(a!=0)
        {
            int rem=a%2;
            d=d+rem;
            a=a/2;

        }


        if(d%2==0)
        {
            cout<<"Case "<<cs++<<": "<<"even"<<endl;
        }
        else
        {
            cout<<"Case "<<cs++<<": "<<"odd"<<endl;
        }

        t--;
    }
}
