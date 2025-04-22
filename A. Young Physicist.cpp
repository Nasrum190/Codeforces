#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n,x,y,z,s1=0,s2=0,s3=0;
    cin>>n;
    while(n!=0)
    {
        cin>>x>>y>>z;
        s1=s1+x;
        s2=s2+y;
        s3=s3+z;

        n--;
    }
    if(s1==0 && s2==0 && s3==0)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }


}
