#include<bits/stdc++.h>
using namespace std;

void fun(int s)
{
    if(s>0)
    {
        if(s>1)
        {
            cout<<s<<" ";

        }
        else
        {
            cout<<s;

        }

        fun(s-1);
    }
}
int main()
{
    int t;
    cin>>t;
    fun(t);
}
