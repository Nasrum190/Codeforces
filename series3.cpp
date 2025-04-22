#include<iostream>
using namespace std;
int main()
{
    int sum=0,num,i;
    cout<<"enter last digit=";
    cin>>num;
    for(i=1;i<=num;i=i+2){
        sum=sum+i;
    }
    cout<<sum;
}
