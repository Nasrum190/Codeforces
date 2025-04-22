
#include<iostream>
using namespace std;
class father
{
private:
    string name;
    double height;
public:
    void setname(string name )
    {
        this->name=name;
    }
    string getname()
    {
        return name;
    }
    void setheight(double height)
    {
        this->height=height;
    }
    double getheight()
    {
        return height;
    }
    void display1()
    {
        cout<<name<<endl<<height<<endl;
    }
};
class son : public father
{
public:
    double salary;
    void yearlysalary()
    {
        display1();
        cout<<"Salary="<<salary<<endl<<"Yearly Salary="<<12*salary;
    }

};
int  main()
{
    son sobj;
    sobj.setname("Nasrum");
    sobj.setheight(162.34);
    sobj.salary= 500;
    sobj.yearlysalary();

}
