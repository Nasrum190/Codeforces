#include<iostream>
using namespace std;
int main()
{
    int row,col,num;
    cin>>num;
    for (row=num;row>=1;row--){
        for(col=1;col<=row;col++){
            cout<<("*");
        }
        cout<<endl;
    }
return 0;
}


