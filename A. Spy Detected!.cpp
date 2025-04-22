#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,i=0,x;
    vector<int>v;

    cin>>a;
    while(a!=0)
    {
        cin>>b;
        while(b!=0)
        {
            cin>>c;
            v.push_back(c);
            b--;
        }
        bool found = false;
        for(i=1 ; i <v.size()-1; i++)
        {
            if(v[i]!=v[i-1] && v[i]!=v[i+1])
            {
                cout<<i+1<<endl;
                found =true;

            }
        }

        if (!found)
        {
            if (v[0]!=v[1])
            {
                cout<<1<<"\n";
            }
            else
            {
                cout<<v.size()<<"\n";
            }

        }
        v.clear();
        a--;

    }
}
