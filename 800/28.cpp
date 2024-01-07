#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    vector<pair<int,int>>vec;

    for(int i=0;i<n;i++){
         int x,y;
         cin>>x>>y;
         vec.push_back({x,y});
    }


    int res=0;

    for(auto it:vec){ 

          int home=it.first;

         for(auto it:vec){
             
             if(it.first!=home){
                int guest=it.second;
                if(guest==home){
                    res++;
                }
             }
             
         }
    }
    cout<<res<<endl;
    return 0;
}