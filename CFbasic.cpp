#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   for(int r=1;r<=n;r++)
   {
       for(int s=1;s<=n-s;s++)
       {
           cout<<" ";

       }
       for(int c=1;c<=(2*r)-1;c++)
       {
           cout<<"*";

       }
       cout<<"\n";
   }


}

