#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin >> t;

   while (t--)
   {
      vector<int> vec;

      for (int i = 0; i < 3; i++)
      {
         int x;
         cin >> x;
         vec.push_back(x);
      }

      int res=0;

      for(auto it:vec){
           res=__gcd(res,it);
      }

      int ans=0;

      for(auto it:vec){
          ans=ans+(it/res-1);
      }

      if(ans<=3){
         cout<<"YES"<<endl;
      }
      else{
         cout<<"NO"<<endl;
      }
   }

   return 0;
}