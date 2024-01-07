#include<bits/stdc++.h>
using namespace std;

int main(){
     

     int n,k;
     cin>>n>>k;
     //just keep adding the letter starting from a 
     // if n>k , then again repeat from start

     string res="";

     while(res.size()<n){

         char ch='a';
         for(int i=0;i<k&&res.size()<n;i++){

              res+=ch;
              ch++;
         }
     }

     cout<<res<<endl;
    return 0;
}