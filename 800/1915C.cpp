#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long int sum=0;

        while(n--){

            int x;
            cin>>x;
            sum+=x;
        }

        long long int temp=sqrt(sum);

        if(temp*temp==sum){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }


    }
    return 0;
}