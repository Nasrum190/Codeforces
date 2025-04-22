#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,t;
    cin>>t;
    while(t!=0)
    {
        cin>>x>>y;
        if ( x>y)
        {
            int temp=x;
             x=y;
             y=temp;

            cout<<x<<" "<<y<<endl;
        }
        else
        {
            cout<<x<<" "<<y<<endl;
        }

        t--;
    }

}
