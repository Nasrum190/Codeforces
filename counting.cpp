#include<iostream>
using namespace std;
int main(){

    int num,count=0;
    cout<<"please enter numbers=";
    cin>>num;
    while(num!=0){
        num=num/10;
        count++;
    }
    cout<<"total number of digits="<<count;

}
