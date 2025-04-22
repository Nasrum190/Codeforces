#include<iostream>
using namespace std;
int main()
{
    for(int i=1;i<=32;i=i+2){
        if(i==13){
            continue;
        }
        if(i>20){
            break;
        }


        cout<<i<<endl;
    }
    return 0;
}
