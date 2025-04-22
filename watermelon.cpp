#include<iostream>
using namespace std;
int main()
{
    int num,sum1,sum2,sum3,sum4,sum5;
    cin>>num;
    sum1 =num/1;sum2=num/2;sum3=num/3;sum4=num/4;sum5=num/5;
    if(sum1<sum2&&sum1<sum3&&sum1<sum4&&sum1<sum5){
        cout<<sum1;
    }
    else if(sum2<sum1&&sum2<sum3&&sum2<sum4&&sum2<sum5){
        cout<<sum2;
    }
    else if(sum3<sum2&&sum3<sum1&&sum3<sum4&&sum3<sum5){
        cout<<sum3;
    }
    else if(sum4<sum2&&sum4<sum3&&sum4<sum1&&sum4<sum5){
        cout<<sum4;
    }
    else
    {
        cout<<sum5;
    }
    return 0;


}
