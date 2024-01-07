#include<bits/stdc++.h>
using namespace std;

int main(){
     
     int n;
     cin>>n;
     int res=1;
     //we just need to check the numbe of groups formed
     //a group will form ,if 01->10
      string prev;
     for(int i=0;i<n;i++){
          
          string temp;
          cin>>temp;
           
           if(i==0){
              prev=temp;
              continue;
           }
           if(prev[0]==temp[1]){
               res++;
           }
           prev=temp;
     }
     cout<<res<<endl;

    return 0;
}