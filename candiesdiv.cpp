#include<iostream>
using namespace std;
int main()
{
 int t;
 cin>>t;
 int candy[t];
 for(int i=0 ; i<t ;i++)
 {
     cin>>candy[i];
 }
 for(int i=0 ;i<t;i++){

     if(candy[i]==1 || candy[i]==2){
        cout<<"0"<<endl;
     }
     else {
        cout<<(candy[i]-1)/2<<endl;
          }
 }


}
