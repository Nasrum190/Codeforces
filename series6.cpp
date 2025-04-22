#include<iostream>
using namespace std;
int main()
{

    float i,sum=0,num;
    cout<<"enter your last number=";
    cin>>num;
    for(i=1;i<=num;i=i+1){
        sum=sum+1/i;
    }
    cout<<sum;
}
