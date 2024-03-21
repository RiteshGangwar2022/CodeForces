#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int n, k;
        cin >> n >> k;
        string str;
        cin >> str;

        unordered_map<char, int> mp;

        for (auto it : str)
        {
            mp[it]++;
        }

        int odds = 0;
        for (auto it : mp)
        {

            if (it.second % 2 == 1)
            {
                odds++;
            }
        }

        odds -= k;
        if (odds <= 1)
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