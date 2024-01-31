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

        // as we have given permutatiaon of lenght n, we need to make all the elements equal inorder to satisfy condition
        int temp = n;
        while (temp--)
        {

            int x;
            cin >> x;

            cout << n + 1 - x << " ";
        }
        cout << endl;
    }
    return 0;
}