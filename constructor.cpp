#include<iostream>
using namespace std;
class student
{
public:
    int id;
    float gpa;


    student ( int a , float b)
    {
    id=a;
    gpa=b;
    }
    void display ()
    {
        cout<<id<<" "<<gpa<<endl;
    }
};
 int main()
 {
     student eamin(101,3.75);
     eamin.display();
     student sajin ( 102, 3.89);
     sajin.display();
     return 0;
 }
