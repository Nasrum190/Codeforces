#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int i;
    int c=1,l;
    for(i=2; ; i++)
    {
            if(i%2==0 || i%3==0 ||i%5==0  )
            {
                cout<<i;

                c++;
               }
               if(c==1500)
                {
                    break;
                }



        }








    cout<<"The 1500'th ugly number is "<<i<<".";
}
