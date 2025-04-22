#include<iostream>
using namespace std;
class person{
public:
    void show()
    {
        cout<<"person"<<endl;

    }
};
class student : public person
{
public:
    void show()
    {
        cout<<"student"<<endl;

    }
};
 class teacher : public person
 {
 public :
    void show ()
    {
        cout<<"teacher";
    }
 };
 int main()
 {
     person p;
     student s;
     teacher t;
     p.show();
     s.show();
     t.show ();
     return 0;
 }
