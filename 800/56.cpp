#include<bits/stdc++.h>
using namespace std;

int main(){

    long long n,k;
    cin>>n>>k;

    long long count=0;

        unordered_set<long long>s;
    while(n--){

        int x;
        cin>>x;
       //1 0 0
       //1
        while(x>0){

             long long rem=x%10;
             x/=10;
         
             if(rem>k){
              
                 continue;
             } 

             s.insert(rem);
        }

        if(s.size()>k){
            count++;
        }
        s.clear();
    }
    cout<<count<<endl;
    return 0;
}