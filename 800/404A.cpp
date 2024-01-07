#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    unordered_set<char> s, s1, s2;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            char ch;
            cin >> ch;
            s.insert(ch);
            if (i == j || i == n - j-1)
            {
                s1.insert(ch);
            }
            else
            {
                s2.insert(ch);
            }
        }
    }

    if (s1.size() == 1 && s2.size() == 1 && s.size() == 2)
    {

        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}