#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int l=s.size();
    int p=0;
    if(s[0]>92)
    {
       
        for(int i = 1 ; i < l ; i++)
        {

           if( s[i] > 92 )
           {
            p=1;
            break;
           } 
        } 
        if(p==1)
        {
            cout<<s;
        }
        else
        {
              if(s[0]>92)
            {
                s[0]-=32;
            }
            for(int i = 1 ; i < l ; i++)
        {

          
           if(s[i]<97)
           {
            s[i]+=32;
           }

          
            
           
           
        } 

        cout<<s;
        }
        
    } 
    else if(s[0]<97)
    {
          for(int i = 1 ; i < l ; i++)
        {

           if( s[i] > 92 )
           {
            p=1;
            break;
           } 
        } 
        if(p==1)
        {
            cout<<s;
        }
        else
        {
            for(int i = 0 ; i < l ; i++)
        {

          
           if(s[i]<97)
           {
            s[i]+=32;
           }

          
            
           
           
        } 

        cout<<s;
        }
    }
    else
    {
        cout<<s;
    }
    return 0;
}