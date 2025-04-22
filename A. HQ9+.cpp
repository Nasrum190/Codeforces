#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int c;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='H'||s[i]=='Q'||s[i]=='9')
        {
           c=1;
           break;
        }
        else
        {
            c=0;
        }
    }
    if(c==1)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}
