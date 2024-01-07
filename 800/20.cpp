#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;
     
     char ch=str[0];
     if(ch>='A'&&ch<='Z'){
        cout<<str<<endl;
     }
     else{
        ch=ch-32;
        str[0]=ch;
        cout<<str<<endl;
     }
    return 0;
}