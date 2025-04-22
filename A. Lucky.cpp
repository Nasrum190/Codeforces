#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,x,y,z;
    string s;
    cin>>a;
    while(a--)
    {
        cin>>s;
        b=int(s[0]);
        c=int(s[1]);
        d=int(s[2]);
        x=int(s[3]);
        y=int(s[4]);
        z=int(s[5]);
        if((b+c+d)==(x+y+z))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }


    }

}
