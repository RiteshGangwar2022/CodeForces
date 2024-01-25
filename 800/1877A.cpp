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
        n--;

        int negative = 0;
        while (n--)
        {

            int x;
            cin >> x;

            negative += x;
        }

        cout << -1 * negative << endl;
    }
    return 0;
}