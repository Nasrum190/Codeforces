#include<iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
int temp = (x-(x%5))/5;
if(x%5>0)
{
    temp++;
}
cout<<temp <<endl;
}
