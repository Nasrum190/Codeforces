#include<iostream>
using namespace std;
int main(){
int num,i,result=1;
cout<<"enter a number=";
cin>>num;
for(i=1;i<=num;i++)
    {
    result=result*i;
}
cout<<result;
return 0;
}
