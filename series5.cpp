#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int num,i,sum=0;
    cout<<"please enter last number=";
    cin>>num;
    for(i=1;i<=num;i++){
            sum=sum+pow(i,2);

    }
    cout<<sum;

    }
