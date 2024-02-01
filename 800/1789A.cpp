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
        bool check = false;
        for (int i = 0; i < temp.size(); i++)
        {

            for (int j = i + 1; j < temp.size(); j++)
            {

                int res = __gcd(temp[i], temp[j]);

                if (res <= 2)
                {
                    cout << "YES" << endl;
                    check = true;
                    break;
                }
            }

            if (check)
            {
                break;
            }
        }
        if (!check)
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}