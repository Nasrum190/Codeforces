#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t,n,a,b,c;
    cin>>t;
    while(t!=0)
    {
        cin>>n;
        if(n==27)
        {
            cout<<"aay"<<endl;
        }
        else{
        if(n>26)
        {
            c=n-26;
            n=0;
            n=c;
            c=26;
            if(n<=26)
            {
                a=n-1;
                n=a;
                a=1;
                if(n<26)
                {
                    b=n;
                }
            }
            else if(n>26 )
            {
                b=n-26;
                n=0;
                n=b;
                b=26;

                if(n<=26)
                {
                    a=n;
                }
            }
            cout<<char(a+96)<<char(b+96)<<char(c+96)<<endl;
        }
        else
        {
            if(n<=26)
            {
                a=n-1;
                n=a;
                a=1;
                if(n<26)
                {
                    b=n-1;
                    n=b;
                    b=1;
                    if(n<26)
                    {
                        c=n;
                    }
                }
            }
            cout<<char(a+96)<<char(b+96)<<char(c+96)<<endl;

        }
        }

        t--;
    }

}
