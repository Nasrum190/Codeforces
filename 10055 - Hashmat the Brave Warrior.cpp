#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h,o;
   while(cin>>h>>o!=EOF) {
    if( h<=pow(2,32) && o<=pow(2,32))
    {
        if( h<=o)
        {
            cout<<o-h;
        }
    }
   }
}
