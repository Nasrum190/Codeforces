#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,po=0,unt=0;
    cin>>n;
    for (int i =1 ; i<=n; i++)
    {
        cin>>a;
        if(a>0)
        {
            po+=a;
        }
        else
        {
            if(po<1)
            {
                unt++;
            }
            else
            {
                po--;
            }
        }

    }
    cout<<unt;



}
