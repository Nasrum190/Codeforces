#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<char>v;
    while(n!=0)
    {
        if(n%2==0)
        {
            v.insert(v.begin(),s[0]);
        }
        else
        {
            v.push_back(s[0]);

        }
        s.erase(0,1);
        n--;
    }
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i];
    }

}
