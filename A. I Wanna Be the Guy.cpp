#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,q,arr[250],c=0;
    cin>>n>>p;
    for(int i=0; i<p; i++)
    {
        cin>>arr[i];
    }
    cin>>q;
    for(int i=p; i<p+q; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+(p+q));
    for(int i=0; i<p+q; i++)
    {
        if(arr[i]!=arr[i+1])
        {
            c++;


        }

    }
    if(c!=n)
    {
        cout<<"Oh, my keyboard!";
    }
    else
    {
        cout<<"I become the guy.";
    }
}

