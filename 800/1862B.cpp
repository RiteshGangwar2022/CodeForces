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
        vector<int> res;
        for (int i = 0; i < n; i++)
        {

            int x;
            cin >> x;

            if (i&&res.back() > x)
            {
                res.push_back(1);
            }
            res.push_back(x);
        }

        cout << res.size() << endl;
        for (auto it : res)
        {
            cout << it << " ";
        }
        cout << endl;
    }
    return 0;
}