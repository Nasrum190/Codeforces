#include<iostream>
using namespace std;
int main()
{   int num[]={12,3,4,5,6,7,2344,42,8};
    int i,value,pos=-1;
    cin>>value;
    for(i=0;i<9;i++){
        if(value==num[i]){
            pos=i+1;
            break;
        }
       }
 if(pos==-1){
            cout<<"not found";
        }
        else{
            cout<<"found at "<<pos<<"position";
        }

}
