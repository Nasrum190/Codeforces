#include<iostream>
using namespace std;
int main()
{
int digit;
cout<<"enter a digit=";
cin>>digit;
switch(digit)
{

case 0:
    cout<<"zero";
    break;
case 1:
    cout<<"one";
    break;
case 2:
    cout<<"two";
    break;
//like this case3,4,5.......
default:
    cout<<"it is not a digit";
}
return 0;
}
