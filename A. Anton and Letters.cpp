#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    set<char>a;
    for(int i=0;i<s.size();i++)
    {
        if(isalpha(s[i]))
        {
            a.insert(s[i]);
        }
    }
    cout<<a.size();



}
