#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {

        long long int n, k;
        cin >> n >> k;

        // either we can break , coins into 2 or k burls
        bool check = true;

        for (int i = 0; i <= 1; i++)
        {

            if ((n - k * i) >= 0 && (n - k * i) % 2 == 0)
            {
                cout << "YES" << endl;
                check = false;
                break;
            }
        }

        if (check)
        {

            cout << "NO" << endl;
        }
    }
    return 0;
}