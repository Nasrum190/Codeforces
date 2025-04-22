#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,c;
    cin>>t;
    while(t!=0)
    {
        cin>>a>>b>>c;
        int sum1=a+b;
        int sum2=a+c;
        int sum3=b+c;
        if(sum1==c || sum2==b || sum3==a)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        t--;
    }
}
