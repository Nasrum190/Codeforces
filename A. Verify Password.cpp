#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,flag=0;

    cin>>t;
    while(t!=0)
    {
        cin>>n;
        string s;
        cin>>s;
        for ( int i=0; i<n-1; i++)
        {
            if(s[i]>s[i+1])
            {
                flag=1;
                break;

            }
            else
            {
                flag=0;
            }
        }
        if(flag==1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
        flag=0;

        t--;
    }
}
