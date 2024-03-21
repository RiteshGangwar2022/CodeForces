#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int a, b, x1, y1, x2, y2;
        cin >> a >> b >> x1 >> y1 >> x2 >> y2;

        set<pair<int, int>> s1;
        set<pair<int, int>> s2;

        s1.insert({x1 + a, y1 + b});
        s1.insert({x1 + a, y1 - b});
        s1.insert({x1 - a, y1 + b});
        s1.insert({x1 - a, y1 - b});

        s1.insert({x1 + b, y1 + a});
        s1.insert({x1 + b, y1 - a});
        s1.insert({x1 - b, y1 + a});
        s1.insert({x1 - b, y1 - a});

        s2.insert({x2 + a, y2 + b});
        s2.insert({x2 + a, y2 - b});
        s2.insert({x2 - a, y2 + b});
        s2.insert({x2 - a, y2 - b});

        s2.insert({x2 + b, y2 + a});
        s2.insert({x2 + b, y2 - a});
        s2.insert({x2 - b, y2 + a});
        s2.insert({x2 - b, y2 - a});

        int res = 0;

        for (auto it : s1)
        {

            if (s2.find(it) != s2.end())
            {
                res++;
            }
        }

        cout << res << endl;
    }
    return 0;
}