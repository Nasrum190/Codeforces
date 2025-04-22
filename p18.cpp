#include<iostream>
using namespace std;
int main()
{

    int num,count=0,row ,col;
    cin>> num;
    for(row=1;row<=num;row++)
    {
        for(col=1;col<=row;col++)
        {
            count++;
            cout<<" "<<count;

        }
        cout<<endl;
    }
}
