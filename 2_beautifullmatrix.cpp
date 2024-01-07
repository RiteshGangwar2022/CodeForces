#include<iostream>

using namespace std;

int main(){
    
     pair<int,int>one;
     for(int i=0;i<5;i++){

          for(int j=0;j<5;j++){
               int x;
               cin>>x;
               if(x==1){
                  one.first=i+1;
                  one.second=j+1;
               }

          }
     }

     int x=one.first;
     int y=one.second;
    int  sum=abs(x-3)+abs(y-3);
     cout<<sum<<endl;

    return 0;
}