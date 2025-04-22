#include<iostream>
using namespace std;
int main(){

int A[5]={4,5,3,5,6};
int *p;

p=new int [3];
p[0] = 1;
p[1] = 5;
p[2] = 3;

for (int i = 0 ; i <5 ; i++)
{
    cout<<A[i]<<" ";
}
cout<<endl;

for ( int i =0 ; i<=2 ; i++){
    cout<<p[i]<<" ";
}



}
