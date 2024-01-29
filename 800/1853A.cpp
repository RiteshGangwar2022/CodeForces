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
        vector<int> temp;
        while (n--)
        {

            int x;
            cin >> x;
            temp.push_back(x);
        }

        if (is_sorted(temp.begin(), temp.end()))
        {

            int mini = INT_MAX;

            for (int i = 1; i < temp.size(); i++)
            {

                mini = min(mini, temp[i] - temp[i - 1]);
            }

            mini += 2;
            cout << mini / 2 << endl;
        }
        else
        {
            cout << "0" << endl;
        }
    }
    return 0;
}