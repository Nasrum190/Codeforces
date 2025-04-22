#include<iostream>
using namespace std;
class student
 {
 private:
    string name;
 public:
    void setname(string name )
    {
       this ->name=name;

    }
    string getname(){
    return name;
    }

};
int main()
{
   student  f1;
    f1.setname("Aftab Riad");
    cout<<f1.getname();


}
