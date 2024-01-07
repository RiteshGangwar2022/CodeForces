#include<bits/stdc++.h>
using namespace std;

int main(){
     

     int n;
     cin>>n;
     string str;
     cin>>str;

     if(n<26){
        cout<<"NO"<<endl;
        return 0;
     }

     unordered_map<char,int>mp;
      
     transform(str.begin(), str.end(), str.begin(), ::tolower);
     for(auto it:str){

        mp[it]++;
     }

     if(mp.size()<26){
        cout<<"NO"<<endl;
     }
     else{
        cout<<"YES"<<endl;
     }
    return 0;
}