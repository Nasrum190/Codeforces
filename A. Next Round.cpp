#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int s[n],p=0;
    for(int i=1; i<=n; i++)
    {
        cin>>s[i];
    }
    for(int i=1;i<=n;i++)
    {
        if(s[i]>=s[k]&& s[i]>0)
        {
            p++;
        }
    }

    cout<<p;


}
