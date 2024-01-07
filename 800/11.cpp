#include<bits/stdc++.h>
using namespace std;

int main(){
     int s;
     cin>>s;
     string str;
     cin>>str;
      
      int a=0;
      int d=0;

      for(int i=0;i<s;i++){

         if(str[i]=='A'){
            a++;
         }
         else{
            d++;
         }
      }
      if(a==d){
        cout<<"Friendship"<<endl;
      }
      else if(a>d){
        cout<<"Anton"<<endl;
      }
      else{
        cout<<"Danik"<<endl;
      }

    return 0;
}