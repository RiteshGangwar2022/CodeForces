#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    vector<int> vec;

    while (n--)
    {

        int x;
        cin >> x;
        vec.push_back(x);
    }

    if (equal(vec.begin() + 1, vec.end(), vec.begin()))
    {
         for(auto it:vec){
            cout<<it<<" ";
         }
         
         return 0;
    }

    set<int> s;
    int count = 0;

    for (int i = 0; i < vec.size() - 1; i++)
    {

        s.insert(vec[i]);
        if (vec[i] < vec[i + 1])
        {
            count++;
            s.insert(vec[i + 1]);
        }
        else
        {

            for (int i = 0; i < count; i++)
            {
                cout << endl;
            }
            count = 0;
            set<int>::reverse_iterator rit;
            for (rit = s.rbegin(); rit != s.rend(); rit++)
            {
                cout << *rit << " ";
            }
            cout << endl;
            s.clear();
        }
    }

    for (int i = 0; i < count; i++)
    {
        cout << endl;
    }
    count = 0;
    set<int>::reverse_iterator rit;
    for (rit = s.rbegin(); rit != s.rend(); rit++)
    {
        cout << *rit << " ";
    }
    cout << endl;
    s.clear();

    return 0;
}