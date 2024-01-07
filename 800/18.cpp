#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;

    set<char>s;
    for(auto it:str){
        s.insert(it);
    }
    if(s.size()%2==0){
        cout<<"CHAT WITH HER!"<<endl;
    }
    else{
        cout<<"IGNORE HIM!"<<endl;
    }
    return 0;
}