#include<bits/stdc++.h>
using namespace std;

int main(){
     

     string str;
     cin>>str;
      
    char curr='a';
    int res=0;

    for(int i=0;i<str.size();i++){

         int dis=abs(str[i]-curr); //from one direction
         //now, to get distance from another direction , we can use size-dis
         //here, total size=26

         res+=min(dis,26-dis);
         curr=str[i];
    }
    cout<<res<<endl;
    return 0;
}