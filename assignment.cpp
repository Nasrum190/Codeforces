#include<iostream>
using namespace std;
class Student
{
    double marks;
public:
    Student (double marks)
    {
        this->marks=marks;
    }
    Student()
    {

    }
    void setMarks(double marks)
    {
        this->marks=marks;
    }
    double getMarks()
    {
        return marks;
    }
};
Student totalMarks(Student s1,Student s2)
{
    double mark=s1.getMarks()+s2.getMarks();
    Student s3;
    s3.setMarks(mark);
    return s3;
}
int main()
{
    Student s1(85.0),s2(45.5);
    Student total=totalMarks(s1,s2);
    cout<<"Total Marks : "<<total.getMarks()<<endl;

    return 0;
}
