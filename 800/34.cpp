#include<bits/stdc++.h>
using namespace std;

int main(){
    int  n,b,d;

    cin>>n>>b>>d;

    int  sum=0;
    int  res=0;
    while(n--){
        int x;
        cin>>x;
        if(x<=b){
           sum+=x;
        }
       

        if(sum>d){
            res++;
            sum=0;
        }
    }
    cout<<res<<endl;
    return 0;
}