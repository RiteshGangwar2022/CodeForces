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

        int mini;
        bool first = true;
        int mini1=INT_MAX;

        while (n--)
        {

            int x;
            cin >> x;

            mini1 = min(mini1, x);

            if (first)
            {

                mini = x;
                first = false;
            }
        }

        if (mini == mini1)
        {

            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}