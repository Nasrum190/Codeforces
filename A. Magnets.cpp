#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,mg,c=0;
cin>>t;
vector<int>m;
for(int i=1;i<=t;i++)
{
    cin>>mg;
    m.push_back(mg);

}
for(int j=0; j<m.size();j++)
{
    if(m[j]!=m[j+1])
    {
        c++;
    }
}
cout<<c;
}
