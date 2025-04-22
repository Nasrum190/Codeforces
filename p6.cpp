
#include<iostream>

using namespace std;
int main()
{
    int row,col,num;


    cout<<"enter";
    cin>>num;
    for(row=1;row<=num;row++){
        for(col=1;col<=row;col++){
            cout<<(char)(row+64);
        }
        cout<<endl;
    }
    return 0;

}

