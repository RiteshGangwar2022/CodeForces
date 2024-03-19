#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    while(t--){

        int n;
        cin>>n;

        vector<int>temp;

        for(int i=0;i<n;i++){

            int x;
            cin>>x;
            temp.push_back(x);
        }

        sort(temp.begin(),temp.end());

        int res=2*(temp[n-1]-temp[0])+2*(temp[n-2]-temp[1]);
        cout<<res<<endl;
    }
    return 0;
}