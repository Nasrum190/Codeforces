#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,a,res=0;
    cin>>n>>m;
     int loc=1;
    while(m!=0)
    {
        cin>>a;

        if(a>=loc)
        {
            res=res+a-loc;
        }
        else
        {
            res=res+n-(loc-a);
        }
        loc=a;
        m--;
    }
    cout<<res;

}
