#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,c=0,q=0;
    vector<char>v;
    cin>>t;
    string s;
    cin>>s;
    if(t<26)
    {
        cout<<"NO";
    }
    else
    {
        transform(s.begin(),s.end(),s.begin(), :: tolower);
        sort(s.begin(),s.end());
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]!=s[i+1])
            {
                c++;
            }
        }

    if(c>=26)
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }
    }

}

