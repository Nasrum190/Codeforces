#include<iostream>
using namespace std;
int main()
{
    int a;
    float f;
    double d;
    char ch;
    char name[30];
    int c= sizeof(a);
    cout<<c<<endl;
    int b= sizeof(f);
    cout<<b<<endl;
    int g= sizeof(d);
    cout<<g<<endl;
    int h= sizeof(ch);
    cout<<h<<endl;
    int i= sizeof(name);
    cout<<i;
    return 0;
}
