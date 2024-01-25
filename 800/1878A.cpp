#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {

        bool check = true;

        int n, k;
        cin >> n >> k;

        while (n--)
        {

            int x;
            cin >> x;
            if (x == k&&check)
            {
                cout << "YES" << endl;
                check = false;
            }
        }
        if (check)
            cout << "NO" << endl;
    }
    return 0;
}