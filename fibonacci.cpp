#include<iostream>
using namespace std;
int main(){
int num,count=0,first=0,second=1,fibo;
cout<<"please enter number=";
cin>>num;
while(count<num){
        if(count<=1){
            fibo=count;
        }
        else{
            fibo=first+second;
            first=second;
            second=fibo;

        } cout<<fibo;

    count++;


}

}
