#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int n;
    string s,a;
    while(t)
    {
       cin>>n;

       for(int i=1;i<=n;i++)
       {
          cin>>s[n];
 for (int i = 0; i < n; i++) {
            s[i] = (s[i] - 'a' + 2) % 26 + 'a';
        }

        cout << s << endl;


        t--;
    }
}
}
