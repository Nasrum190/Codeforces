#include<iostream>
using namespace std;
class Person
{
public:
    string name;
    long long int id;
    int age;
    void show1()
    {
        cout<<"name:"<<name<<endl;
        cout<<"id:"<<id<<endl;
        cout<<"age:"<<age;
    }
};
class student : public Person
{

public:
    char c;
    int s;

    void show2()
    {
        cout<<"sec:"<<c<<endl;
        cout<<"smester:"<<s<<endl;
        show1();
    }
};
int main()
{
    student p;
    p.name="Nasrum";
    p.age= 23;
    p.id=41220200190;
    p.s=3;
    p.c='A';
    p.show2();
}
