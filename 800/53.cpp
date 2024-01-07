#include<bits/stdc++.h>
using namespace std;


int main(){


    string str1="qwertyuiop";
    string str2="asdfghjkl;";
    string str3="zxcvbnm,./";
    
    char ins;
    cin>>ins;
    string str;
    cin>>str;

    string ans="";

    for(int i=0;i<str.size();i++){
       
           
           for(int j=0;j<str1.size();j++){

                    if(str[i]==str1[j]){

                        if(ins=='R'){

                         ans+=str1[j-1];
                        }
                        else if(ins=='L'){
                            ans+=str1[j+1];
                        }
                         continue;
                    }

           }
           for(int j=0;j<str2.size();j++){

                    if(str[i]==str2[j]){
                        
                          if(ins=='R'){

                         ans+=str2[j-1];
                        }
                        else if(ins=='L'){
                            ans+=str2[j+1];
                        }
                         continue;
                    }
           }
           for(int j=0;j<str3.size();j++){

                    if(str[i]==str3[j]){
                         
                          if(ins=='R'){

                         ans+=str3[j-1];
                        }
                        else if(ins=='L'){
                            ans+=str3[j+1];
                        }
                         continue;
                    }
           }
    }
    cout<<ans<<endl;


    return 0;
}