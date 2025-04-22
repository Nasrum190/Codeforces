#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long int t,a;
    int c=0;
    cin>>t;
    while(t)
    {
        cin>>a;
        for(long long int j=1; j<=a; j++)
        {
            if(a%j==0)
            {
                c++;

            }
        }
        if(c==3)
        {
            cout<<"YES"<<endl;
            c=0;

        }
        else if(c>3 || c<3)
        {
            cout<<"NO"<<endl;
            c=0;
        }
        t--;
    }

}


