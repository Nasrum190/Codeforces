#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    sort(a.begin(),a.end());
    int c=0;

    for (int i=0;i<a.size();i++)
    {
       if(a[i]==a[i+1]){
        c=c+1;

       }
    }
int sum=a.size()-c;
    if(sum%2==0){
        cout<<"CHAT WITH HER!";
    }
    else{
        cout<<"IGNORE HIM!";
    }

}
