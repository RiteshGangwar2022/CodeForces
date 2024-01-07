#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, k;
    cin >> n >> k;

    long long odd = 0;
    long long even = 0;
    if (n % 2 == 0)
    {
        odd = n / 2;
        even = n / 2;
    }
    else
    {
        odd = (n / 2) + 1;
        even = n / 2;
    }

    bool pos = true;

    if (k > odd)
    {
        pos = false;
        k-=odd;
    }
   // 10 3
    if (pos == true)
    {
        long long ans=1+(k-1)*2;
        cout<<ans<<endl;
    }
    // 7 7 => 1 3 5 7 2 4 6
    else
    {//k=3
          long long ans=2+(k-1)*2;
          cout<<ans<<endl;
    }

    return 0;
}