#include<iostream>
using namespace std;
int main()
{
    int num,rem,temp,sum=0;
    cout<<"enter digits=";
    cin>>num;
    temp=num;
    while(temp!=0){
        rem=temp%10;
        sum=sum+rem;
        temp=temp/10;
    }
    cout<<"sum of digits="<<sum;
    return 0;
}
