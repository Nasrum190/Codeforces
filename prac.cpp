#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n = 32;
    vector<int>a,b,res;

    a.assign(n,0);
    b.assign(n,0);
    res.assign(n,0);

    int x,y,i, fin =0;

    cin>>x>>y;

    i = n-1;
    while(x>0)
    {
        a[i--] = x%2;
        //cout<<x%2<<" ";
        x = x/2;
    }

    i = n-1;
    while(y>0)
    {
        b[i--] = y%2;
        //cout<<y%2<<" ";
        y = y/2;
    }
    /*
    for(int i = 0; i< a.size();i++)
    {
       cout<<a[i]<<endl;
    }

    for(int i = 0; i< a.size();i++)
    {
       cout<<b[i]<<endl;
    }
    */
    for(int i = 0; i< res.size();i++)
    {
       if((a[i] == 0 && b[i] == 1) || (a[i] == 1 && b[i] == 0) )
       {
           res[i] = 1;
       }
    }
    /*
    for(int i = 0; i< res.size();i++)
    {
       cout<<res[i]<<endl;
    }
    */
    int j = 0;
    for(int i = n-1; i>=0 ;i--)
    {
       fin = fin + res[i]*pow(2,j++);
    }

    cout<<fin<<endl;




}
