#include<bits/stdc++.h>
using namespace std;

void helper(){
         int n;
        cin>>n;

        unordered_map<int,int>mp;

        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            mp[x]++;
        }

        if(mp.size()==1){
            cout<<"yes"<<endl;
            return;
        }
        else if(mp.size()>=3){
            cout<<"NO"<<endl;
            return;
        }

        vector<int>temp(2,0);
         
         int k=0;
        for(auto it:mp){
            temp[k++]=it.second;
        }

        if(abs(temp[0]-temp[1])>=2){
            cout<<"no"<<endl;
        }
        else{
            cout<<"yes"<<endl;
        }
}
int main(){
    
    int t;
    cin>>t;
    while(t--){
        helper();
    }
    return 0;
}