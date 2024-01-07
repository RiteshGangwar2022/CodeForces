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
       
        long long res = 0;
        long long count = 0;
        for (int i = 0; i < n; i++)
        {

            long long x;
            cin >> x;
            if (x == 1)
            {
                count++;
            }
            res += x;
        }

        if (res >= count + n && n>1)
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