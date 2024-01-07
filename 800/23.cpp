#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> vec;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        vec.push_back(x);
    }
    int seerja = 0;
    int deema = 0;
    bool first = true;
    for (auto it : vec)
    {

        int front = vec.front();
        int back = vec.back();

        // seerja turn
        if (first)
        {

            if (front > back)
            {

                seerja += front;
                vec.erase(vec.begin(),vec.begin()+1);
            }
            else
            {
                seerja += back;
                vec.pop_back();
            }
            first=false;
        }
        else
        {

            if (front > back)
            {

                deema += front;
                  vec.erase(vec.begin(),vec.begin()+1);
            }
            else
            {
                deema += back;
                vec.pop_back();
            }
            first=true;
        }
    }
     cout<<seerja<<" "<<deema<<endl;
    return 0;
}