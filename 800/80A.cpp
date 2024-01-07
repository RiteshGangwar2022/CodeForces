#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{

    if (n <= 1)
    {

        return false;
    }

    // Check from 2 to n-1
    for (int i = 2; i <= n / 2; i++)
    {

        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{

    int n, m;
    cin >> n >> m;

    if (n == 2 && m == 3 || n == 3 && m == 5)
    {
        cout << "YES" << endl;
    }
    else
    {
        bool check = false;
        for (int i = n + 1; i < m; i++)
        {

            if (isPrime(i))
            {
                check = true;
            }
        }

        if (check)
        {
            cout << "NO" << endl;
        }
        else
        {
            if (isPrime(m))
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}