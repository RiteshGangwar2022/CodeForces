#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    bool check = false;
    vector<int> vec;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        vec.push_back(x);
        if (x != y)
        {
            check = true;
        }
    }

    if (check)
    {
        cout << "rated" << endl;
    }
    else
    {
        reverse(vec.begin(), vec.end());
        if (is_sorted(vec.begin(), vec.end()))
        {
            cout << "maybe" << endl;
        }
        else
        {
            cout << "unrated" << endl;
        }
    }

    return 0;
}