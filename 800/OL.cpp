#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {

        string str;
        cin >> str;
        bool check = true;
        for (int i = 1; i < str.size(); i++)
        {

            if (str[i] != '0')
            {

                string first = str.substr(0, i);
                string second = str.substr(i, str.size());

                int a = stoi(first);
                int b = stoi(second);
                if (a<b)
                {

                    cout << a << " " << b << endl;
                   check = false;
                    break;
                }
            }
        }

        if (check)
        {
            cout << "-1" << endl;
        }
    }
    return 0;
}