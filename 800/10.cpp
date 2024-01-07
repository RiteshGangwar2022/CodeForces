#include<bits/stdc++.h>
using namespace std;

int main(){
      
      int n,h;
      cin>>n>>h;
      int res=0;
      while(n--){
          
          int x;
          cin>>x;
          if(x>h){
            res+=2;
          }
          else{
            res+=1;
          }
      }
      cout<<res<<endl;
    return 0;
}