#include<bits/stdc++.h>
using namespace std;

int main(){
     
     int n;
     cin>>n;
     vector<int>vec;

     int one=0;
     int two=0;
     int three=0;

     while(n--){

        int x;
        cin>>x;
        vec.push_back(x);
        if(x==1){
            one++;
        }
        else if(x==2){
            two++;
        }
        else{
            three++;
        }
     }
 
    //it will give the number of teams possible
     int teams=min(one,min(two,three));
     cout<<teams<<endl;

     int o=0;
     int t=0;
     int th=0;
     vector<int>arr1,arr2,arr3;

     for(int i=0;i<vec.size();i++){
         if(vec[i]==1){
           arr1.push_back(i+1);
        }
        else if(vec[i]==2){
            arr2.push_back(i+1);
        }
        else{
            arr3.push_back(i+1);
        }
     }

     for(int i=0;i<teams;i++){
          cout<<arr1[i]<<" "<<arr2[i]<<" "<<arr3[i]<<endl;
     }
 
    

    return 0;
}