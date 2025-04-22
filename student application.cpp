#include<iostream>
using namespace std;
int main()
{
    int num,sum=0;
    cout<<"please enter number of students=";
    cin>>num;
    int marks[num];
    for(int i=0; i<num; i++)
    {
        cout<<"number of student"<<i+1<<"=";
        cin>>marks[i];
        sum=sum+marks[i];
    }
    cout<<"total number is="<<sum<<endl;
    cout<<"Average mark is="<<(float)sum/num<<endl;





    int max=marks[0];
    int min=marks[0];
    for(int i=1; i<num; i++)
    {
        if(max<marks[i])
        {
            max=marks[i];
        }
        if(min>marks[i])
        {
            min=marks[i];
        }

    }
    cout<<"maximum number is="<<max<<endl;
    cout<<"minimum number is="<<min;




}

