#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=0,k=0;
    cin>>n>>k;
    for(int i=1; i<=k; i++)
    {
        if(n%10==0)
        {
            n=n/10;

        }
        else
        {
            n--;
        }

    }
    cout<<n;
}
