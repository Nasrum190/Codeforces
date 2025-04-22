#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t,a;
    cin>>t;
    vector<int>v,v2;
    while(t--)
    {
        cin >> a;

        while(a--)
        {
            int b;
            cin >> b;
            v.push_back(b);

        }



            for ( int i=0; i<v.size(); i++)
            {
                if(i==0 || i%2==0)
                {
                    v2.push_back(v[i]);
                }
            }

            int res=*max_element(v2.begin(),v2.end());


            cout<<res<<endl;
            v.clear();
            v2.clear();



    }


}

