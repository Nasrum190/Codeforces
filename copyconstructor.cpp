#include<iostream>
using namespace std;
class Value
{
private:
    int a,b;
public:
 Value ( int x , int y)
 {
     a=x;
     b=y;
 }
 Value ( Value &nas )
 {
     a=nas.b;
     b=nas.a;
 }
 void show()
 {
     cout<<a<<" "<<b<<endl;
 }
};
int main()
{
    Value v(2,4);
    v.show();
    Value Vc=v;
    Vc.show();

}
