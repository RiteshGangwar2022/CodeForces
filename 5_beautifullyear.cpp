#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;  //1000<=n<=9000
     for(long long i=n+1;i<=9000;i++){
              
              set<int>s;
              int x=i;
              int y=1000;
              while(x>0){
                   int num=x/y;
                   s.insert(num);
                   x%=y;
                   y/=10;
                  
              }
              if(s.size()==4){
                    cout<<i<<endl;
                       break;
              }
     }

    return 0;
}