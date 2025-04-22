#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int nsol,sol,i,max_v=0,min_v=100,max_i=0,min_i=0;
    cin>>nsol;
    for ( i=1 ; i<=nsol;i++)
    {
        cin>>sol;
        if(sol>max_v)
        {
          max_i=i;
          max_v=sol;
        }
        if(sol<=min_v)
        {
            min_i=i;
            min_v=sol;
        }

    }
    if(max_i>min_i)
    {
        cout<<(max_i-1)+(nsol-min_i)-1;
    }
    else
        {
        cout<<(max_i-1)+(nsol-min_i);
    }



}

