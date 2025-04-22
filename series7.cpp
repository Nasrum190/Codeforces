#include<iostream>
using namespace std;
int main(){
    int a=1,b=2,num1,num2,sum=0;
    cout<<"please enter num1 and num2=";
    cin>>num1>>num2;
    while(a<=num1&&b<=num2){

        sum=sum+a*b;
    a=a+1;
    b=b+1;
      }
    cout<<sum;

}
