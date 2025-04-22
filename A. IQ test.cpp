#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int t,a,ev=0,odd=0;
    cin>>t;
    vector<int>v;
    while(t!=0)
    {
        cin>>a;
        v.push_back(a);
        t--;
    }
    for ( int i=0; i<v.size(); i++)
    {
        if(v[i]%2==0)
        {
            ev++;

        }
        else
        {
            odd++;
        }
    }
    for ( int i=0; i<v.size(); i++)
    {
        if(ev<odd)
        {
            if(v[i]%2==0)
            {
                cout<<i+1;
            }

        }
        else
        {
            if(v[i]%2!=0)
            {
                cout<<i+1;
            }
        }
    }
}
