#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{
    float num1,num2,sum;
    cout<<showpoint;
    cout<<fixed;
    cout<<setprecision(2);
    cout<<"enter 2 numbers=";
    cin>>num1>>num2;
    sum=num1+num2;
    cout<<setw(23)<<"your sum is="<<sum<<endl;
    float sub;
    sub=num1-num2;
    cout<<setw(23)<<"your substraction is="<<sub<<endl;
    cout<<noshowpoint;
    float mul=num1*num2;
    cout<<setw(20)<<"your multiplication is="<<mul<<endl;
    double div=(float)num1/num2;
    cout<<setw(23)<<"your division is="<<div<<endl;
    //int rem=num1%num2;
    //cout<<"your reaminder is="<<rem;
    getch();
}
