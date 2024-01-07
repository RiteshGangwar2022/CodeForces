#include<bits/stdc++.h>
using namespace std;
bool comp (char s1, char s2)
{
    return tolower(s1)<tolower(s2);
}
int main(){
    
    string str1;
    cin>>str1;
    string str2;
    cin>>str2;
    
    //we can compare two string lexicographically using lexicographical_compare fn
   //return true if first string is less than second string
    //comp= fn used to compare string incase-sensitive
    

    if(lexicographical_compare(str1.begin(),str1.end(),str2.begin(),str2.end(),comp)){
         //means if str1 is smaller than str2
         cout<<-1<<endl;
    }
    else{
         
         if(lexicographical_compare(str2.begin(),str2.end(),str1.begin(),str1.end(),comp)){
             //means if str2 is smaller than str1
             cout<<1<<endl;
         }
         else{
            cout<<0<<endl;
         }
    }

}