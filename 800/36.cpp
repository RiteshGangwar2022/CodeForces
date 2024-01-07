#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin,str);
    set<char> s;

    for (int i = 0; i < str.size(); i++)
    {

        if (str[i] != ',' && str[i] != ' ' && str[i] != '{' && str[i] != '}')
        {
            s.insert(str[i]);
        }
    }
    cout << s.size() << endl;
    return 0;
}