#include<bits/stdc++.h>
using namespace std;

int main(){
     

     int n;
     cin>>n;

     int res=0;
     int off=0;
     while(n--){

        int x;
        cin>>x;

        if(x<0){

             if(off==0){
                 res++;
             }
             else{
                 
                 off--;
                 if(off==0){
                    off=0;
                 }
             }
        }
        else{
            off+=x;
        }
     }
     cout<<res<<endl;
    return 0;
}