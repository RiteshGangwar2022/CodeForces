#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {

        int n, x;
        cin >> n >> x;

        if (x > n || n%x!=0)
        {
            cout << 1 << endl;
            cout << n << endl;
        }
        else
        {

            cout << "2" << endl;
            cout << n - 1 << " "
                 << "1" << endl;
        }
    }
    return 0;
    
}