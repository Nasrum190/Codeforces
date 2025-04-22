#include<iostream>
using namespace std;
class Person
{
public:
    string name;
    int age;

    Person(string name,int age )
    {
      this->name=name;
      this->age=age;
      cout<<"c"<<endl;
      cout<<name<<endl<<age<<endl;
    }

    Person (const Person &per )
    {
        name=per.name;
        age=per.age;
        cout<<"c2"<<endl<<name<<endl<<age;
    }

};
int main()
{
    Person p1("Nasrum",23);

    Person p2=p1;


}
