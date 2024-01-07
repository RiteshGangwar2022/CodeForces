#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long n;
    cin >> n;
    
    vector<long long>vec;
    while(n--){

        long long x;
        cin>>x;
        vec.push_back(x);
    }

    int maxi=*max_element(vec.begin(),vec.end());
    int mini=*min_element(vec.begin(),vec.end());
    long long count=0;

    for(auto it:vec){

         if(it<maxi && it>mini){
            count++;
         }
    }
    cout<<count<<endl;
    return 0;
}