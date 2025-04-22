#include<iostream>
using namespace std;
int main()
{
    int num,row,col;
    cout<<"enter a number of line";
    cin>>num;
    for(row=1;row<=num;row++)
    {
        for(col=1;col<=row;col++){
            cout<<" * ";
        }
        cout<<endl;
    }
}
