#include<iostream>
using namespace std;
int main()
{
    int people,opi,c=0;
    cin>>people;
    while(people!=0)
    {
        cin>>opi;
        if(opi==1)
        {
            c=1;
        }
        people--;
    }
    if(c==1)
    {
        cout<<"HARD";
    }
    else
    {
        cout<<"EASY";
    }
}
