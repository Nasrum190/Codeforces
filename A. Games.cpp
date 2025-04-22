#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x,y,c=0;
    vector<int>a,b;
    cin>>t;
    while(t!=0)
    {
        cin>>x>>y;
        a.push_back(x);
        b.push_back(y);
        t--;
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    for(int i=0; i<a.size(); i++)
    {
        for(int j=0;j<b.size();j++)
        {
             if(a[i]==b[j] )
        {
            c++;
        }

        }

    }
  cout<<c;

}
