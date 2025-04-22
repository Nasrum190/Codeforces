#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    string s;
    cin>>t;
    while(t--){
        cin>>s;

        for ( int i=1 ;i<s.length()-1;i++){
            if(s[i]==s[i+1]){
                s.erase(i+1,1);
            }
        }
        cout<<s<<endl;
    }

}
