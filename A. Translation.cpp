#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,t;
    int c;
    cin>>s;
    cin>>t;
    for(int i=0,j=t.size()-1;i<s.size(),j>=0 ;i++,j--)
    {
        if(s[i]==t[j])
        {
            c++;
        }
        else
        {
            c=0;
        }
    }
        if(c==s.size())
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }

}
