#include<iostream>
using namespace std;
class Employee
{
private:
    string name;
    double salary;
public:
    void setname( string name )
    {
        this->name=name;
    }
    string getname()
    {
        return name;
    }
    void setsalary( double salary )
    {
        this->salary=salary;
    }
    double getsalary()
    {
        return salary;

    }
    double yearlySalary()
    {
        return 12*salary;

    }
};
int main()
{
    Employee E;
    E.setname("Nasrum");
    E.setsalary(454.364);
    cout<<E.getname()<<endl;
    cout<<E.yearlySalary();



}
