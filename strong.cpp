#include<iostream>
using namespace std;
int main()
{
    int sum=0,num,i,temp,fact,rem;
    cout<<"enter numbers=";
    cin>>num;
    temp=num;
    while(temp!=0)
    {
        rem=temp%10;
        fact=1;
        for(i=1;i<=rem;i++)
        {
            fact=fact*i;
        }

        sum=sum+fact;
        temp=temp/10;



    }
    if(sum==num)
    {
        cout<<"strong";
    }
    else
    {
        cout<<"not strong";
    }
    return 0;
}

