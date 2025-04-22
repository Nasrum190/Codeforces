#include<iostream>
using  namespace std;
class Person
{
public :
    string name;
    int age;
    void show1()
    {
        cout<<name<<endl;
        cout<<age<<endl;
    }
};
class  Employee : public Person
{
public :
    long long int  emp_id;
    void show2()
    {    show1();
        cout<<emp_id<<endl;
    }
};
class Manager : public Employee
{
public:
    string department;
    void show3()
    {
        show2();
        cout<<department<<endl;
    }
};
int main()
{
    Manager M;
    M.name="Nasrum";
    M.age=24;
    M.emp_id=41220200190;
    M.department="Computer Science and Engineering";
    M.show3();

}
