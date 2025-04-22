#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin>>a;
    cin>>b;
    cin>>c;
    int f=a*c*b;
    int x=(a+b)*c;
    int y=a*(b+c);

    int k=a+b+c;

    if(x>=y  && x>=f && x>=k)
    {
        cout<<x;
    }
    else if(y>=x &&  y>=f && y >=k)
    {
        cout<<y;
    }
    else if(f>=x && f>=y  && f>=k)
    {
        cout<<f;
    }
    else
    {
        cout<<k;
    }



}
