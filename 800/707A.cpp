#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    bool check = false;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {

            char ch;
            cin >> ch;
            if (ch != 'W'&&ch != 'B'&&ch != 'G')
            {
                check = true;
            }
        }
    }

    if (check)
    {
        cout << "#Color" << endl;
    }
    else
    {
        cout << "#Black&White" << endl;
    }
    return 0;
}