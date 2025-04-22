#include<iostream>
using namespace std;
int main(){
int num,row,col;
cout<<"enter a last number";
cin>>num;
for(row=1;row<=num;row++){
    for(col=1;col<=row;col++){
        cout<<" "<<row%2; //col%2
    }
    cout<<endl;
}
    }
