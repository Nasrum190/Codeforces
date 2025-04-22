#include<bits/stdc++.h>
using namespace std;
int  main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,a,b,pass=0,max_p=0;
    cin>>n;
    for( int i=1;i<=n;i++)
    {
        cin>>a>>b;
        pass=(b+pass)-a;
        if(max_p<pass)
        {
            max_p=pass;
        }
    }
    cout<<max_p;


}
