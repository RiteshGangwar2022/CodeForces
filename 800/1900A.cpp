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

        string str;
        cin >> str;

        int res = 0;

        int count = 0;

        for (auto it : str)
        {

            if (it == '.')
            {
                count++;
            }
            else
            {

                if (count >= 3)
                {
                    break;
                }
                else
                {
                    res += count;
                    count = 0;
                }
            }
        }
        res += count;
        if (count < 3)
        {
            cout << res << endl;
        }
        else
        {
            cout << "2" << endl;
        }
    }
    return 0;
}