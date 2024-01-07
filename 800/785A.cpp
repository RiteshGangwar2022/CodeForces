#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin>>t;
     int ans=0;
    while(t--){
           
           string temp;
           cin>>temp;

           if(temp=="Icosahedron"){
                 ans+=20;
           }
           else if(temp=="Dodecahedron"){
                ans+=12;
           }
           else if(temp=="Octahedron"){
                  ans+=8;
           }
           else if(temp=="Tetrahedron"){
              ans+=4;
           }
           else{
              ans+=6;
           }
    }
    cout<<ans<<endl;
    return 0;
}