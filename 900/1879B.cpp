#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        long long sum1 = 0;
        long long sum2 = 0;
        long long mini1 = INT_MAX;
        long long mini2 = INT_MAX;

        for (int i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            sum1 += x;
            mini1 = min(mini1, x);
        }

        for (int i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            sum2 += x;
            mini2 = min(mini2, x);
        }

        long long res = min(mini1 * n + sum2, mini2 * n + sum1);

        cout << res << endl;

    }
    return 0;
}