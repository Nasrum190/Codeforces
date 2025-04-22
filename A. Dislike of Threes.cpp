#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t, k;
    cin>>t;
    while(t--)
    {
        cin >> k;
        for ( int i =1; ; i++){
            if(i%3==0 || i%10==3){
                continue;
            }
            else{
                k--;
                if(k==0){
                    cout<<i<<endl;
                    break;
                }
            }
        }

    }

}
