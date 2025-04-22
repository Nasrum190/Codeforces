#include<iostream>
using namespace std;
class Shape
{
public:
    double dim1,dim2;
    Shape(double dim1,double dim2)
    {
        this->dim1=dim1;
        this->dim2=dim2;
    }
    virtual double area()
    {
        return 0;
    }

};
class Rectangle : public Shape
{
public:
    Rectangle(double dim1,double dim2) : Shape (dim1,dim2)
    {

    }
    double area()
    {
        return dim1*dim2;
    }
};
class Triangle : public Shape
{
public:
    Triangle (double dim1,double dim2) : Shape (dim1,dim2)
    {

    }
    double area()
    {
        return 0.5*dim1*dim2;
    }

};


int main()
{
    Shape *Sobj;
    Rectangle Robj(10,20);
    Triangle Tobj(10,20);
    Sobj=&Robj;
    cout<<Sobj->area()<<endl;
    Sobj=&Tobj;

    cout<<Sobj->area();

}
