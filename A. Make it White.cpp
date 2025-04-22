#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,a,b,c=0;
    string s;

    cin>>t;
    while(t!=0)
    {

        cin>>n;
        cin>>s;
        for(int i=0; i<=s.size(); i++)
        {
            if(s[i]=='B')
            {
                a=i;
                break;

            }
        }
        for(int i=s.size(); i>=0; i--)
        {
            if(s[i]=='B')
            {
                b=i;
                break;

            }
        }
        for(int i=a; i<=b; i++)
        {
            if(s[i]=='B' ||s[i]=='W' )
            {
               c++;

            }
        }
cout<<c<<endl;
c=0;

        t--;
    }

}
