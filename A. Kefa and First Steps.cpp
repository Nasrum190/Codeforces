#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,a,c=1,l=1;
    vector<int>v;
    cin>>i;
    while(i--)
    {
        cin>>a;
        v.push_back(a);
    }

    for ( int x=0; x<v.size(); x++)
    {
        if(x>0)
        {
            if( v[x]>=v[x-1])
            {
                l++;
                c=max(c,l);

            }
            else
            {
                l=1;


            }
        }



    }

    cout<<c;
}
