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

        string temp, temp1;
        cin >> temp >> temp1;

        int count = 0;
        if (temp.find(temp1) != std::string::npos)
        {
            cout << 0 << endl;
            continue;
        }
        bool check = true;
        while (temp.size() <= 25)
        {

            temp += temp;
            count++;
            if (temp.find(temp1) != std::string::npos)
            {
                cout << count << endl;
                check = false;
                break;
            }
        }

        if (check)
        {

            cout << -1 << endl;
        }
    }

    return 0;
}