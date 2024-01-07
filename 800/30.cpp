#include<bits/stdc++.h>
using namespace std;

int main(){
    

    string s;
    cin>>s;
    string t;
    cin>>t;

    int res=1;
     
   int i=0;
   int j=0;
   while(i<t.size()){

        int temp=1;

       
        while(j<s.size()){
            
            if(t[i]==s[j]){
                temp++;
            }
            else{
                break;
            }
            i++;
            j++;
        }
        res=max(res,temp);
        i=0;
   }
    cout<<res<<endl;
    return 0;
}