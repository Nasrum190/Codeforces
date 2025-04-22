#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;

    cin>>s1>>s2;
    char c[s1.size()];
    for(int i=0;i<s1.size();i++)
    {
        if(s1[i]==s2[i])
        {
            c[i]='0';
        }
        else
        {
            c[i]='1';
        }
    }
cout<<c;
}
