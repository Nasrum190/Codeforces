#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    double base1,base2,height;
    cout<<"enter base1,base2 and height=";
    cin>>base1>>base2>>height;
    double area=1.0/2*(base1+base2)*height;
    cout<<"your trapeziod area is="<<area;
    getch();
}
