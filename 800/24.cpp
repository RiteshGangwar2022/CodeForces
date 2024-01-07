#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string str;
    cin >> str;


    int res = 0;
 
   //rrrrrrr
    for (int i = 1; i < str.size(); i++)
    {

        if (str[i - 1] == str[i])
         res++;
    }
  
    cout << res << endl;

    return 0;
}