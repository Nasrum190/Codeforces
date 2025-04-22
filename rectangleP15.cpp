#include<iostream>
using namespace std;
int main()
{
    int num,i,j;
    cin >> num;
    for(i=1 ; i<=num ; i++){
        for(j=1 ; j<=num ; j++)
        {
            if(i==1 || i==num  ||   j==1 || j==num){
                cout<<"*" ;

            }
            else {
                cout<<" ";
            }


        }
  cout<<endl;



    }
}
