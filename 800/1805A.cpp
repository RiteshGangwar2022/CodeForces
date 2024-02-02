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

        // if lenght of array is odd
        if (temp.size() % 2 != 0)
        {

            int res = temp[0];

            for (int i = 1; i < temp.size(); i++)
            {
                res ^= temp[i];
            }
            cout << res << endl;
        }
        else
        {

            int res = temp[0];

            for (int i = 1; i < temp.size(); i++)
            {
                res ^= temp[i];
            }

            if (res == 0)
            {

                cout << temp[0] << endl;
            }
            else
            {
                cout << "-1" << endl;
            }
        }
    }
    return 0;
}