#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a;
    cin>>t;
    while(t)
    {
        int n1;
        cin>>a;
        if(a>10)
        {
            n1=a-10;
            cout<<n1<<" "<<"10"<<endl;
        }
        else
        {
            cout<<"0"<<" "<<a<<endl;
        }
        t--;
    }
}
