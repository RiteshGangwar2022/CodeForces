#include<bits/stdc++.h>
using namespace std;

int main(){
      
      int k,r;
      cin>>k>>r;

      int res=1;

      int cost=k;
      int demo=r;

      while(1){
          


          if(cost%10==0){
               cout<<res<<endl;
               break;
          }

           int temp=cost-demo;
           if(temp%10==0){
               cout<<res<<endl;
               break;
           }
           else{
               cost+=k;
               res++;  
           }
      }
    return 0;
}