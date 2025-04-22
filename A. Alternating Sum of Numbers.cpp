#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,a,sum=0,sub=0,res=0;
    vector<int>v;
    cin>>t;
    while(t--)
    {
        cin>>n;

        while(n--)
        {
            cin>>a;
            v.push_back(a);

        }
        for( int i=0; i<v.size(); i++)
        {
            if(i==0 || i%2==0)
            {
                sum=sum+v[i];
            }
            else
            {
                sub=sub+v[i];
            }
        }
        res=sum-sub;
        cout<<res<<endl;
        v.clear();
        res=0;
        sum=0;
        sub=0;

    }

}
