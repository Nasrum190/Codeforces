#include<iostream>
using namespace std;
class Student
{
    static int cnt ;
public:
    int id;
    Student (int a)
    {
        cnt++;
    }
    void display()
    {
        cout<<"value"<<cnt<<endl;
    }

};
int Student :: cnt=0;
int main()
{
    Student eamin(190);
    eamin.display();
    Student riad(222);
    riad.display();

}
