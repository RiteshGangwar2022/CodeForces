#include<bits/stdc++.h>
using namespace std;

int main(){
     string str;
     cin>>str;
    
    int u=0;
    int l=0;

    for(auto it:str){

        if(it>='A'&&it<='Z'){
            u++;
        }
        else{
            l++;
        }
    }

    if(l>=u){
          transform(str.begin(),str.end(),str.begin(),::tolower);
          cout<<str<<endl;
    }
    else{
         transform(str.begin(),str.end(),str.begin(),::toupper);
         cout<<str<<endl;
    }

    return 0;
}