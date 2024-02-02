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
        int first = 0;
        bool check = true;
        for (int i = 0; i < temp.size(); i++)
        {

            if (temp[i] == 2)
            {
                first++;
            }
            int second = 0;
            for (int j = i + 1; j < temp.size(); j++)
            {

                if (temp[j] == 2)
                {
                    second++;
                }
            }

            if (first == second)
            {

                cout << i+1<< endl;
                check = false;
                break;
            }
        }

        if (check)
        {
            cout << "-1" << endl;
        }
    }
    return 0;
}