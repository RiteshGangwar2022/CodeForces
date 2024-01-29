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

        int positive = 0;
        int negative = 0;
        int temp = n;
        while (temp--)
        {

            int x;
            cin >> x;

            if (x == 1)
            {
                positive++;
            }
            else
            {
                negative++;
            }
        }

        if (n % 2 != 0)
        {
            n++;
        }

        if (positive >= n / 2)
        {

            if (negative % 2 == 0)
            {

                cout << "0" << endl;
            }
            else
            {
                cout << "1" << endl;
            }
        }
        else
        {

            int res = (n / 2) - positive; // 1
            negative -= res;

            if (res < 0)
            {
                cout << "0" << endl;
            }
            else if (negative % 2 == 0)
            {
                cout << res << endl;
            }
            else
            {
                cout << res + 1 << endl;
            }
        }
    }
    return 0;
}