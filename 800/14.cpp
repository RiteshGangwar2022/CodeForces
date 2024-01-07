#include<bits/stdc++.h>
using namespace std;

int main(){
     
     int t;
     cin>>t;
     int res=0;
     while(t--){

          int n=3;
            
            int ones=0;
          while(n--){
                  
                  int x;
                  cin>>x;
                  if(x==1){
                    ones++;
                  }
          }
          if(ones>=2){
            res++;
          }
     }
     
     cout<<res<<endl;
     
    return 0;
}