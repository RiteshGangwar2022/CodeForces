#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int n, x;
        cin >> n >> x;

        vector<int> temp;

        while (n--)
        {

            int val;
            cin >> val;
            temp.push_back(val);
        }

        int maxi = temp[0];
        for (int i = 1; i < temp.size(); i++)
        {

            maxi = max(maxi, (temp[i] - temp[i - 1]));
        }

        maxi = max(maxi, (2 * (x - temp[temp.size() - 1])));
        cout << maxi << endl;
    }
    return 0;
}