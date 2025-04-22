#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long  int a,b,c,d,y=0;
    vector<int>x;
    cin>>a>>b>>c>>d;
    x.push_back(a);
    x.push_back(b);
    x.push_back(c);
    x.push_back(d);
    for(long long int i=0; i<x.size()-1; i++)
    {
        if(x[i]==x[i+1]||x[i]==x[i+2]||x[i]==x[i+3])
        {
            y++;
        }


    }

cout<<y;



}
