#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,a,b,res;
    cin>>t;
    while(t!=0)
    {
        cin>>a>>b;
        if(a%b==0)
        {
            cout<<"0"<<endl;

        }
        else
        {
           res=a%b;
           cout<<b-res<<endl;
        }
        t--;
    }

}
