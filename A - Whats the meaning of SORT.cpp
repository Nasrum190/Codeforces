#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a;
    cin>>n;
    vector<int>n2;
    for(int i=1;i<=n;i++)
    {
        cin>>a;
        n2.push_back(a);
    }
    sort(n2.begin(),n2.end());
     for(int j=0;j<n2.size();j++)
    {
       cout<<n2[j]<<" ";
    }
}
