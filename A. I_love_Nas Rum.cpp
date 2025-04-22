#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,co=0,b,w;
    cin>>t;
    vector<int>v;
    while(t!=0)
    {
        cin>>a;
        v.push_back(a);
        t--;
    }
    b=v[0];
    w=v[0];
    for (int i= 1 ; i<v.size(); i++)
    {

        if(v[i]<w)
        {
            w=v[i];
            co++;
        }
        if (v[i]>b)
        {
            b=v[i];
            co++;
        }


    }
    cout<<co;
}
