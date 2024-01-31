#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {

        int x;
        cin >> x;

        string str;
        cin >> str;

        int i = 0;
        int j = x - 1;

        while (i < j)
        {

            if (str[i] != str[j])
            {

                i++;
                j--;
            }
            else
            {
                break;
            }
        }

        cout << j - i + 1 << endl;
    }
    return 0;
}