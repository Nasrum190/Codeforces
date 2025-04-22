#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t,n,a,b;
    cin>>t;
    while(t!=0)
    {
        cin>>n>>a>>b;

        if(2*a>b)
        {
            cout<<(n/2)*b+(n%2)*a<<endl;


        }
        else
        {
            cout<<n*a<<endl;
        }
 t--;
    }


}

