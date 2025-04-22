#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    for (int i=0;i<s.size()-1;i++)
    {
        if(s[i]=='h' && s[i+1]=='e'&&s[i+2]=='l'&&s[i+3]=='o')
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }
    }
}
