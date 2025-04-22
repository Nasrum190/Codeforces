#include<iostream>
using namespace std;
int main()
{

    int i,num,count=0;
    cout<<"enter a number=";
    cin>>num;
    for(i=2; i<num; i++)
    {
        if(num%i==0)
        {
            count++;

            break;
        }
    }
        if(count==0)
        {
            cout<<"prime number";
        }
        else{
            cout<<"not prime";
        }




 return 0;
}

