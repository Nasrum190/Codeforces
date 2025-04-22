#include<iostream>
using namespace std;
int main(){
int num,odd=0,even=0;
cout<<"enter range=";
cin>>num;
for(int i=1;i<=num;i++)
{
    if(i%2==0){
        even=even+i;
    }
    else{
        odd=odd+i;
    }

}
 int sum=odd-even;
    cout<<"sum is="<<sum;

}
