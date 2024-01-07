#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int arr[4];

    for(int i=0;i<4;i++){
         cin>>arr[i];
    }

    string str;
    cin>>str;

    int res=0;

    for(int i=0;i<str.size();i++){
         res+=arr[str[i]-'0'-1];
    }

    cout<<res<<endl;
    return 0;
}