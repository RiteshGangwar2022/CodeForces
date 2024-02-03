#include <bits/stdc++.h>
using namespace std;

bool check(int x)
{

    string str = to_string(x);
    int count = 0;
    int i = 0;

    while (i < str.size())
    {

        if (str[i] != '0')
        {
            count++;
        }
        i++;
    }

    if (count == 1)
    {
        return true;
    }
    return false;
}
int main()
{

    vector<int> singledigit;
    // to reduce time complexity previouly storing all the elements
    for (int i = 1; i <= 1e6; i++)
    {

        if (check(i))
        {
            singledigit.push_back(i);
        }
    }

    int t;
    cin >> t;

    while (t--)
    {

        int n;
        cin >> n;
        int res = 0;

        /* it will give TLE as we are running t*n times
        //to reduce time complexity=>  we can first store all the extremely positve integers
        //iterate over that array till <=n, ans return res
        for (int i = 1; i <=n; i++)
          {

              if (check(i))
              {
                  res++;
              }
          }*/

        for (int i = 0; i < singledigit.size() && singledigit[i] <= n; i++)
        {
               
                res++;
        }
        cout << res << endl;
    }
    return 0;
}