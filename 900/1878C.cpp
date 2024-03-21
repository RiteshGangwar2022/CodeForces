#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        long long int n, k, target;
        cin >> n >> k >> target;

        // just apply concept of maximum sum and minimum sum
        // we can obtain any sum that lies between minimum and maximum sum

        long long int minsum = k * (k + 1) / 2;
        long long int maxsum = (n * (n + 1) - (n - k) * (n - k + 1)) / 2;

        if (target >= minsum && target <= maxsum)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}