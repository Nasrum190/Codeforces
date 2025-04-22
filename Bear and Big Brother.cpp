#include<iostream>
using namespace std;
int main()
{
    int a,b,limak,bob,count=0;
    cin>>a>>b;
  limak=a;
   bob=b;
   while(limak<=bob)
  {

    limak=limak*3;


     bob=bob*2;
     ++count;
  }
    cout<<count<<endl;


}
