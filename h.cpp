#include <bits/stdc++.h>
using namespace std;
int main()
{



        int n;
        cin >> n;

        vector<int> v1(n);
        for (int i = 0; i < n; i++) cin >> v1[i];

        int last = v1[0];
        int res = 1;
        int maxCount = 1;
        for (int i = 1; i < n; i++)
        {
            if (v1[i] <= last)
                res += 1;
            else
                res = 1;
            maxCount = max(maxCount, res);
            last = v1[i];
        }

        cout << maxCount - 1;

    return 0;
}


