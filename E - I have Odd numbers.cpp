#include<bits/stdc++.h>
using namespace std;
int main()
{
    long  long int t,n,k;
    cin>>t;
    while(t)
    {
        cin>>n>>k;
        if((k*k)>n)
        {
            cout<<"NO"<<endl;
        }
        else if(n%2!=k%2)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
        t--;
    }
    return 0;

}
