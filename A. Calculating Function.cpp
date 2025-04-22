#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long  int n,sum=0,sub=0;
    cin>>n;

    if(n%2==0)
    {
        cout<<n/2;
    }
    else
    {
        cout<<(-(n+1))/2;
    }
}
