#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, a;
    cin >> t;
    vector<int> v(t);

    for(int i = 0; i < t; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    int res = 0;
    for(int i = 0; i < t; i++) {
        if(v[i] == res) {
            res++;
        }
    }

    cout << res << endl;

    return 0;
}
