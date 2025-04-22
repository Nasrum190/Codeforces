#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    getline(cin,a);
    int l=a.size();
    for ( int i=0; i<l; i++)
    {
        if(a[i]=='A'||a[i]=='O'||a[i]=='Y'||a[i]=='E'||a[i]=='U'||a[i]=='I'||a[i]=='a'||a[i]=='o'||a[i]=='y'||a[i]=='e'||a[i]=='u'||a[i]=='i')
        {
            a[i]='.';

        }
    }
    string s1,s2;
    for(int i=0; i < l; i++)
    {
        a[i] == '.' ? s1.push_back(a[i]) : s2.push_back(a[i]);
    }

    for(int i=0; i<s2.size(); i++)
    {
        if(s2[i] < 97)
        {
            s2[i] += 32;
            cout<<"."<<s2[i];
        }
        else
        {
            cout<<"."<<s2[i];
        }

    }
}
