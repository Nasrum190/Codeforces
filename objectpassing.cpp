#include<iostream>
using namespace std;
class student
{
private :
    int marks,totalmarks;
public:
    void getmarks()
    {
    cin>>marks;
    }
    void add(student m1,student m2)
    {
        totalmarks=m1.marks+m2.marks;

    }
    void display()
    {
        cout<<totalmarks;
    }
};
int main()
{
    student s1,s2,s3;
    s1.getmarks();
    s2.getmarks();
    s3.add(s1,s2);
    s3.display();

}
