#include<iostream>
using namespace std;
class User
{
public:
    virtual void SendMessage()=0;


};

class Nasrum : public User
{
public:
    string N;
    void SendMessage()
    {
        cout<<"Nasrum Typing..."<<endl;
        getline(cin,N);
    cout<<N<<endl;

    }

};
class Riya : public User
{
public:
         ~Riya()
{
    cout<<endl<<"Sent";
}
    string S;
    void SendMessage()
    { cout<<"Riya Typing..."<<endl;
        getline(cin,S);
        cout<<S;
    }
};
int main()
{

    User *u;
    Nasrum Nobj;
    Riya Robj;
    u=&Nobj;
    u->SendMessage();
    u=&Robj;
    u->SendMessage();
}
