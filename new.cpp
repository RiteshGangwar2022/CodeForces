#include<bits/stdc++.h>
using namespace std;

int main(){
    

    int t;
    cin>>t;
    while(t--){

        int n;
        cin>>n;

        string str;
        cin>>str;
        unordered_set<char>st;
        long long ans=0;

        for(auto it:str){

            st.insert(it);
            ans+=st.size();
        }

        cout<<ans<<endl;
    }
    return 0;
}