#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t!=0)
    {
        int l,r,count=0;
        cin>>l>>r;
        int x=r;

        while(x!=1)
        {
            x=x/2;
            count++;
        }
        if(x==1)
        {
            cout<<count<<endl;
        }


        t--;
    }
}
