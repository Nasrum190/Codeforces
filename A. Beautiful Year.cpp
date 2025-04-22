#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,a,b,c,d;
cin>>n;
while(1)
{
    n++;
    a=n/1000;
    b=(n%1000)/100;
    c=((n%1000)%100)/10;
    d=((n%1000)%100)%10;
    if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
    {
        break;
    }
}
cout<<n;
}
