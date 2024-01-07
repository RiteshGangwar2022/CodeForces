#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;
    
    sort(str.begin(),str.end());
    queue<char>q;

    for(auto it:str){
        if(it!='+'){
            q.push(it);
        }
    }

    string res;

    char ch=q.front();
    q.pop();
    res.push_back(ch);
    if(q.size()!=0){
             res.push_back('+');
         }
    while(q.size()){

         auto it=q.front();
         q.pop();
         res.push_back(it);

         if(q.size()!=0){
             res.push_back('+');
         }
    }
    cout<<res<<endl; 
    return 0;
}