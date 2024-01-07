#include <bits/stdc++.h>
using namespace std;

void solve()
{

    int t;
    cin >> t;

    int m;
    cin >> m;

    unordered_set<int> s;

    while (m--)
    {
        int x;
        cin >> x;
        s.insert(x);
    }
    int n;
    cin >> n;
    while (n--)
    {

        int x;
        cin >> x;
        s.insert(x);
    }

    for (int i = 1; i <= t; i++)
    {

        if (s.find(i) == s.end())
        {
            cout << "Oh, my keyboard!" << endl;
            return;
        }
    }

    cout << "I become the guy." << endl;
}
int main()
{

    solve();

    return 0;
}