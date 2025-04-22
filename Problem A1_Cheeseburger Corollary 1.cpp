#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
     int s,d,k,cs=1;
    do
    {

        cin>>s>>d>>k;
        int b1=2*s,c1=1*s,p1=1*s;
        int b2=2*d,c2=2*d,p2=2*d;
        int b3=k+1,c3=k,p3=k;
        int B=b1+b2;
        int C=c1+c2;
        int P=p1+p2;
        cout<<"Case #"<<cs++<<": ";
        if(B>=b3 && C>=c3 && P>=p3 )
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }



    }while(t=t-1);
}
