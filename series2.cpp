#include<iostream>
using namespace std;
int main(){
int num,sum=0,i;
cout<<"enter your last number=";
cin>>num;
for(i=2;i<=num;i=i+2){
    sum=sum+i;
}cout<<sum;

}
