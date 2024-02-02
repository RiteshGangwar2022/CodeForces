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

        int res = 0;
        int even = 0;
        int odd = 0;

        //  => 1 7 11 2 13
        // 1 1 1 2 2 3
        for (int i = 0; i < temp.size(); i++)
        {

            if (temp[i] % 2 == 0)
            {
                even++;
                if (odd > 0)
                {
                    res += odd - 1; // 2
                    odd = 0;
                }
            }
            else
            {

                if (even > 0)
                {
                    res += even - 1; // 3
                    even = 0;
                }
                odd++;
            }
        }
        if (odd > 0)
        {
            res += odd - 1; // 2
            odd = 0;
        }
        if (even > 0)
        {
            res += even - 1; // 3
            even = 0;
        }
        cout << res << endl;
    }
    return 0;
}