#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    int flag=0;
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    s1.append(s2);

    sort(s1.begin(),s1.end());
    sort(s3.begin(),s3.end());
    if(s1==s3)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}
