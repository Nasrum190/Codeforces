#include<bits/stdc++.h>
using namespace std;
int main()
{
    int  n,c=0;
    cin>>n;
    int a[14]={4,7,44,47,74,77,444,447,474,477,744,747,774,777};
    for(int i=0;i<14;i++)
    {
        if(n%a[i]==0)
        {
            c=1;
            break;
        }

    }
    if(c==1)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

}
