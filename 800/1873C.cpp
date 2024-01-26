#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {

        vector<int> temp(5, 0);

        for (int i = 1; i <= 10; i++)
        {

            for (int j = 1; j <= 10; j++)
            {

                char ch;
                cin >> ch;

                if (ch == 'X')
                {

                    if (i == 1 || i == 10 || j == 1 || j == 10)
                    {
                        temp[0]++;
                    }
                    else if (i == 2 || i == 9 || j == 2 || j == 9)
                    {
                        temp[1]++;
                    }
                    else if (i == 3 || i == 8 || j == 3 || j == 8)
                    {
                        temp[2]++;
                    }
                    else if (i == 4 || i == 7 || j == 4 || j == 7)
                    {
                        temp[3]++;
                    }
                    else if (i == 5 || i == 6 || j == 5 || j == 6)
                    {
                        temp[4]++;
                    }
                }
            }
        }
        int res = 0;
        int points = 1;
        for (int i = 0; i < temp.size(); i++)
        {

            res += temp[i] * points;
            points++;
        }
        cout << res << endl;
    }
    return 0;
}