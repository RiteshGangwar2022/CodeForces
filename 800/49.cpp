#include <iostream>
#include<cstring>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int pos = 0;
    int neg = 0;
    while (n--)
    {
        string str;
        cin>>str;
        int i = 0;
        while (i < str.size())
        {
            if (str[i] == '+')
            {
                pos++;
                break;
            }
            else if (str[i] == '-')
            {
                neg++;
                break;
            }
            i++;
        }
    }
    cout << pos - neg << endl;

    return 0;
}