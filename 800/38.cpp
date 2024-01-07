#include<bits/stdc++.h>
using namespace std;

int main(){
    

     long long n,x;
     cin>>n>>x;


     long long res=0;
     long long total=x;
     while(n--){
          
          char sign;
          long long val;
          cin>>sign;
          cin>>val;

          if(sign=='+'){
             total+=val;
          }
          else if(sign=='-'){
               
               if((total-val)<0){
                  res++;
               }
               else{
                  total-=val;
               }
          }
     }
     cout<<total<<" "<<res<<endl;

    return 0;
}