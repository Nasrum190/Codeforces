#include<iostream>
using namespace std;
class Person
{
public:
    string name;
    int age;
    void show()
    {
     cout<<name<<endl<<age<<endl;
    }

};
class student : public Person
{
public:
    string grade;
    void show1()
    {
        show();
        cout<<grade<<endl;

    }
};
int main()
{
    student s;
    s.name="Nasrum";
    s.age=23;
    s.grade="A+";
    s.show1();
}
