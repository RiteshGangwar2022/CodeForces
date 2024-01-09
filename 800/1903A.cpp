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
        vector<int>ans;
        while (n--)
        {
            int x;
            cin >> x;
            ans.push_back(x);
        }
        if (k >= 2 || is_sorted(ans.begin(),ans.end()))
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