#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin >> t;

    while (t--)
    {

        long long int a, c, n;
        cin >> a >> c >> n;

        vector<long long int> temp;

        for (long long int i = 0; i < n; i++)
        {

            long long int x;
            cin >> x;
            temp.push_back(x);
        }

        long long int res = 0;
        sort(temp.begin(), temp.end());

        for (long long int i = 0; i < temp.size(); i++)
        {
             
             res+=min(a-1,temp[i]);
            /*while (i < n && c < a)
            {
                c += temp[i];
                i++;
            }
            if (i < temp.size())
            {

                c = min(c, a);
                c--;
                res++;
                long long int temp = c - 1;
                c -= temp;
                res += temp;
            }
            else
            {
                res += c;
            }*/
        }
        cout << res+c << endl;
    }
    return 0;
}