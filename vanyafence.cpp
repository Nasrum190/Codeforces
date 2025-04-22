#include<iostream>
using namespace std;
int main()
{
    int n,h,a,sum1=0,sum2=0;
    cin >> n ;
    cin>> h;
    for(int i=1; i<=n; i++  )
    {
        cin >> a;
   if(a<=h){
       sum1++;


   }
   else{
    sum2+=2;
   }



   }

cout<<sum1+sum2;


}






