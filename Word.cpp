#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int l=s.size();
    int upp=0,lwr=0;


    for(int i=0; i<l; i++)
    {

        if(s[i]>92)
        {
            lwr++;
        }
        else
        {
            upp++;
        }
    }
    if(upp>lwr)
    {
        for(int i=0; i<l; i++)
        {
            if(s[i]>92)
            {
                s[i]-=32;
            }
        }
    }
    else
    {
        for(int i=0; i<l; i++)
        {
            if(s[i]<97)
            {
                s[i]+=32;
            }

        }

    }
    cout<<s;

}






