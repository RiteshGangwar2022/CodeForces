#include<bits/stdc++.h>
using namespace std;

int helper(vector<int>&nums){


    
        int n=nums.size();
        
        vector<int>left(n,0);
        vector<int>right(n,0);
        
        left[0]=nums[0];
        
        for(int i=1;i<nums.size();i++){
            
            left[i]=min(left[i-1],nums[i]);
        }

        right[n-1]=nums[n-1];
        
        for(int i=nums.size()-2;i>=0;i--){
            
            right[i]=min(nums[i],right[i+1]);
        }
        
        int res=INT_MAX;
        
        for(int i=1;i<nums.size()-1;i++){
            
             if(nums[i]>left[i-1] && nums[i]>right[i+1]){
                 int temp=nums[i]+left[i-1]+right[i+1];
                 cout<<temp<<" ";
                 res=min(res,temp);
             }
        }
        cout<<res<<endl;
        if(res==INT_MAX){
            return -1;
        }
        
        return res;

}
int main(){
    
    vector<int>nums={5,4,8,7,10,2};

    int ans=helper(nums);
    cout<<ans<<endl;
    return 0;
}