#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a;
    vector<int>v;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>a;
        while(a--)
        {
            cin>>s;
            for(int i=0 ; i<s.length() ; i++)
            {
                if(s[i]=='#')
                {
                    v.push_back(i);
                }
            }

        }
        reverse(v.begin() , v.end());
        for(int i=0 ; i<v.size() ; i++)
            {
                cout<<v[i]+1<<" ";

            }
            v.clear();

    }

}
