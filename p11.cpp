#include<iostream>
using namespace std;
int main()
{
    int n,row,col;
    cout<<"please enter row number:";
    cin>>n;
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=n-row;col++){
            cout<<" ";
        }
        for(col=1;col<=2*row-1;col++){
            cout<<(char)(col+64);
        }
        cout<<endl;
    }
     for(row=n-1;row>=1;row--)
    {
        for(col=1;col<=n-row;col++){
            cout<<" ";
        }
        for(col=1;col<=2*row-1;col++){
            cout<<(char)(col+64);
        }
        cout<<endl;
    }
}
