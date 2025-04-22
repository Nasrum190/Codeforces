#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,n1,n2,n3,n4,n5,n6;
    cin>>a>>b>>c>>d;
    n1=a+b*c;
    n2=a*b+c;
    n3=a+b-c;
    n4=a-b+c;
    n5=a-b*c;
    n6=a*b-c;
    if(n1==d || n2==d || n3==d || n4==d || n5==d || n6==d )
    {
        cout<<"YES";

    }
    else
    {
        cout<<"NO";
    }

}
