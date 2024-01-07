#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int t;
    cin >> t;
    if (t==10)
    {
        if (n == 1)
        {
            cout << "-1" << endl;
        }
        else
        {
            for (int i = 0; i < n - 1; i++)
            {
                cout << "1";
            }
            cout << "0" << endl;
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            cout << t;
        }
    }

    return 0;
}