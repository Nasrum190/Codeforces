#include<iostream>
using namespace std;
int addition(int a,int b);
int subtraction(int a, int b);
int multiplication( int a, int b);
int division ( int a,int b);

int main()
{
    int add=addition(10,5);
    int sub= subtraction(10,5);
    int mul= multiplication(10,5);
    int div= division( 10,5);
    cout<<add<<endl;
    cout<<sub<<endl;
    cout<<mul<<endl;
    cout<<div;



}
int addition(int a,int b)
{
    return a+b;
}
int subtraction( int a,int b)
{
    return a-b;
}
int multiplication ( int a , int b)
{
    return a*b;
}
int division ( int a, int b)
{
    return a/b;
}
