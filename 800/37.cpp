#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    while(n--){
        string str;
        cin>>str;

        int s=str.size();
        if(str.size()<=10){
            cout<<str<<endl;
        }
        else{

            char s=str[0];
            char e=str[str.size()-1];
            int res=str.size()-2;
            cout<<s<<res<<e<<endl;
        }
    }
    return 0;
}