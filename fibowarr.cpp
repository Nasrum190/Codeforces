#include<iostream>
using namespace std;
int main()
{
    int num,i,a[30];
    cin>>num;
    a[0]=0;
    a[1]=1;
    for(i=2;i<num;i++){
        a[i]=a[i-1]+a[i-2];

    }
    cout<<endl;
    for(i=0;i<num;i++){
        cout<<" "<<a[i];
    }
}
