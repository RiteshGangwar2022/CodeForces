#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n,k;
    cin>>n>>k;
    vector<int>vec;

    while(n--){

        int x;
        cin>>x;
        vec.push_back(x);
    }

    int maxi=vec[k-1];

    int count=0;

    for(auto it:vec){

         if(it>0 && it>=maxi){
            count++;
         }
    }
    cout<<count<<endl;
    return 0;
}