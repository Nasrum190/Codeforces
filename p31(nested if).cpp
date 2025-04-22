#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<" please enter a number=";
    cin>>num;
    if(num>0){
        if(num%2==0){
            cout<<"even";
        }
        else{
            cout<<"odd";
        }
    }
    else{
        cout<<"can't go ahead with your response";
    }
    return 0;
}
