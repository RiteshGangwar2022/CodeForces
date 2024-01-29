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
        bool check = true;
        int y;
        cin >> y;
        temp.push_back(y);
        n--;
        while (n--)
        {

            int x;
            cin >> x;
            if (x != y)
            {
                check = false;
            }
            temp.push_back(x);
        }

        if (check)
        {
            cout << "-1" << endl;
        }
        else
        {

            vector<int> first, second;

            int maxi = *max_element(temp.begin(), temp.end());

            for (auto it : temp)
            {

                if (it == maxi)
                {
                    second.push_back(it);
                }
                else
                {
                    first.push_back(it);
                }
            }

            cout << first.size() << " " << second.size() << endl;

            for (auto it : first)
            {

                cout << it << " ";
            }
            cout << endl;
            for (auto it : second)
            {

                cout << it << " ";
            }
            cout << endl;
        }
    }
    return 0;
}



   