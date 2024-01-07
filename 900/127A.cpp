#include <bits/stdc++.h>
using namespace std;

int main()
{
    double n, k;
    cin >> n >> k;

    double l = 0;
    double x1, y1;
    bool first = true;
    while (n--)
    {

        int x2, y2;
        cin >> x2 >> y2;

        if (first)
        {
            x1 = x2;
            y1 = y2;
            first = false;
        }
        else
        {

            double t1 = (x1 - x2) * (x1 - x2);
            double t2 = (y1 - y2) * (y1 - y2);
            l += sqrt(t1 + t2);
            x1 = x2;
            y1 = y2;
        }
    }
    
     cout << fixed << setprecision(9) << l * k / 50 << endl;
    return 0;
}