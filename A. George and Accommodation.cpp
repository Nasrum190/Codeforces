#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,q,c=0;
    cin>>n;
    while(n!=0)
    {
        cin>>p>>q;
        if(q-p>=2)
        {
            c++;
        }

        n--;
    }
    cout<<c;
}
