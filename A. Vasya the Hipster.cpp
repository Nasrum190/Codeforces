#include<bits/stdc++.h>
using namespace std;
int main(){
    int r,b,res;
    cin>>r>>b;
    int mi=min(r,b);
    res = max(r,b)- min(r,b);
    if(res%2==0){
            res=res/2;
    }
    else{
            res-1;
    res=res/2;
    }
    cout<<mi<<" "<<res;
}
