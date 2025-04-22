
#include<iostream>
using namespace std;
int main()
{
    int k,n,w,i,m,sum2,sum=0;
    cin>>k>>n>>w;
    for(i=1; i<=w; i++)
    {
        sum+=i*k;



    } sum2=sum-n;


  if(sum2<=0)
    {
        cout<<"0";
    }
    else
        cout<<sum2;





}
