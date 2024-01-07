#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    unordered_map<string, int> mp;

    while (n--)
    {

        string str;
        cin >> str;
        mp[str]++;
    }

    int maxi = 0;
    for (auto it : mp)
    {
        maxi = max(maxi, it.second);
    }

    for(auto it:mp){

        if(it.second==maxi){
            cout<<it.first<<endl;
            break;
        }
    }
    return 0;
}