#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    int x=l*k;

    int y=x/nl;
    int g=p/np;
    int lime=c*d;

    int min_V=min(g,y);
    min_V=min(min_V,lime);
    int res=min_V/n;
    cout<<res;


}
