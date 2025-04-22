#include<iostream>
using namespace std;
int main()
{
    int marks[5];
    for(int i=1;i<=5;i++){
            cout<<"please enter number of student"<< i << "=";
        cin>>marks[i];
    }
    for(int i=1;i<=5;i++){
        cout<<marks[i];
    }

}
