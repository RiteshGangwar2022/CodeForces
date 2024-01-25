#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {

        int n, m;            // a
                             // a a a a a
        cin >> n >> m;       // count=>1 aa => 2 aaaa => 3 aaaaaaaa
        string str1, str2;   // eforc
        cin >> str1 >> str2; // force
        int count = 0;       // 1 => eforceeforce
        bool check = true;   // fjdgmujlcont
                           // tf
        while (str1.size() <= 2 * str2.size())
        {

            if (str1.find(str2) != string::npos)
            {
                cout << count << endl;
                check = false;
                break;
            }
            str1 += str1;
            count++;
        }
        if (str1.find(str2) != string::npos && check)
        {
            cout << count << endl;
        }
        else if (check)
        {

            str1 += str1;
            count++;
            if (str1.find(str2) != string::npos && check)
            {
                cout << count << endl;
            }
            else
            {
                cout << "-1" << endl;
            }
        }
    }
    return 0;
}