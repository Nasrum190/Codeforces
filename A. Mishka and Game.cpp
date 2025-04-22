#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector<int>v1,v2;
    int t;
    cin>>t;

    while(t--){
            int a,b;
        cin>>a>>b;
        v1.push_back(a);
        v2.push_back(b);
    }
    int mishka=0, chris=0;
    for(int i = 0 ; i<v1.size() ; i++){

      if(v1[i]>v2[i])
      {
          mishka++;
      }
      else if (v1[i]<v2[i])
      {
          chris++;
      }
    }
    if(mishka>chris)
    {
        cout<<"Mishka";
    }
    else if (chris>mishka)
    {
        cout<<"Chris";
    }
    else{
        cout<<"Friendship is magic!^^";
    }
}
