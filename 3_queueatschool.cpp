#include<iostream>
using namespace std;

int main(){
        int size;
        cin>>size;
        int t;
        cin>>t;
        string str;
        cin>>str;
         while(t--){
              
              for(int i=1;i<str.size();i++){
                    if(str[i-1]=='B'&&str[i]=='G'){
                         swap(str[i-1],str[i]);
                         i++;
                    }
              }
              
         }
         cout<<str<<endl;
    
    return 0;
}