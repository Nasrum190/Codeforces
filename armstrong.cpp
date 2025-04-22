#include<iostream>
using namespace std;
int main()
{
    int sum=0,num,temp,rem;
    cout<<"enter numbers=";
cin>>num;
    temp=num;
    while(temp!=0){
        rem=temp%10;
        sum=sum+rem*rem*rem;
        temp=temp/10;
            }
            if(sum==num){
                cout<<"armstrong";
            }
            else{
                cout<<"not armstrong";
            }

}
