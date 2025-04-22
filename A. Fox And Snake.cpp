#include<bits/stdc++.h>
using namespace std;
int main()
{

    int c,r,s=0;
    cin>>c>>r;
    while(c!=0)
    {
        if(c%2!=0)
        {
            for (int i=0; i<r; i++)
            {
                cout<<"#";
            }


        }
        else
        {
            s++;
            for( int j=0 ; j<r; j++)
            {
                if(s%2==1 && j==r-1)
                {
                    cout<<"#";
                }
                else if(s%2==0 && j==0)
                {
                    cout<<"#";
                }
                else
                {
                    cout<<".";
                }
            }
        }
        cout<<"\n";
        c--;
    }
}

