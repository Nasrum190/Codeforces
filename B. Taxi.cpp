#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,s;
    int sum = 0;
    vector<int>v;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a;
        v.push_back(a);
    }

    for(int i=0;i<n;i++) {
        sum = sum + v[i];

    }

    float res = sum / 4;

    if (res * 4 < sum) {
        cout<<(res + 1);
        return 0;
    }

    cout<<res;

}
