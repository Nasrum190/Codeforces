#include<iostream>
using namespace std;
int main()
{
    int num,row,col;
    cin>>num;
    for(row=1;row<=num;row++){
        for(col=1;col<=num;col++){
            if(row==col || col+row==num+1){

                cout<<"*";
            }
            else {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
