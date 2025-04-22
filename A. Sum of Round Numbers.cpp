#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n, j=0,ans;
    vector<int> res;
    cin>>t;
    while(t!=0)
    {
        cin>>n;
        while(n>0)
        {
            if(n%10)
            {
                ans=pow(10,j);
                ans*=(n%10);

                res.push_back(ans);


            }
            n/=10;
            j++;

        }

        int len=res.size();
        cout<<len<<endl;

        for(int i=0 ; i<len; i++)
        {
            cout<<res[i]<<" ";
        }

        cout<<endl;

        res.clear();
        j=0;


        t--;
    }
}
