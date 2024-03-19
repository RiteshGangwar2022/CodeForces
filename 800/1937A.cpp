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

        int temp = log2(n);
        long long int res = pow(2, temp);
        cout << res << endl;
    }
    return 0;
}