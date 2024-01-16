#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    string temp = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    while (t--)
    {

        int n;
        cin >> n;
        string str;
        cin >> str;

        int ans = 0;
        int index = 0;
        char first;
        bool f=true;

        while (n > 0 && index < str.size())
        {

            char ch = str[index++];
            int it = temp.find(ch);
            cout<<"in"<<it<<endl;
            n -= it+1;
            if(n<0){
                break;
            }
            if(f){
               ans++;
               first=ch;
               f=false;
            }
            else{

                if(ch!=first){
                    ans++;
                    first=ch;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}