#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    float x,y,k;
    while(t--)
    {
        cin>>x>>y>>k;
        int d1=ceil(x/k);
         int   d2=ceil(y/k);
        if(d2>=d1)
        {
            cout<<d2*2<<endl;
        }
        else
        {
            cout<<(d1*2)-1<<endl;
        }

    }
}
