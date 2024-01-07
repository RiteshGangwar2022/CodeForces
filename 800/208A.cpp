#include<bits/stdc++.h>
using namespace std;

int main(){
    
    string str;
    cin>>str;

    string ans="";
     
     for(int i=0;i<str.size()-2;i++){
           
           if(str[i]=='W'&&str[i+1]=='U'&&str[i+2]=='B'){
                 
                   i+=2;
           }
           else{
               
                while(str[i]!='W'&&str[i+1]!='U'){
                      ans+=str[i];
                      i++;
                }
                ans+=" ";
           }
     }  
     cout<<ans<<endl;
    return 0;
}