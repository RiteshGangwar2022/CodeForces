#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    int sum = 0;
    vector<int> nums;
    while (t--)
    {

        int x;
        cin >> x;
        sum += x;
        nums.push_back(x);
    }

    sort(nums.begin(), nums.end(),greater<int>());
    sum/=2;

    int ans = 0;
    int temp = 0;
    int i = 0;
    while (temp <= sum && i < nums.size())
    {
        temp += nums[i];
        i++;
        ans++;
    }
    cout << ans << endl;
    return 0;
}
/*5
4 2 2 2 2*/