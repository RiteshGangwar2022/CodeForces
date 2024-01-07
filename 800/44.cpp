#include<bits/stdc++.h>
using namespace std;

void helper(vector<long>nums1,vectot<long>nums2){
         
    
        int n1 = nums1.size();
        int n2 = nums2.size();
        if(n1>n2)
            return find_median(nums2,nums1);
        int n = n1+n2;
        int left = (n+1)/2;
        int low = 0;
        int high = n1;
        float res=1.00;
        while(low<=high)
        {
            int mid1 = (low+high)/2;
            int mid2 = left-mid1;
            
            long l1,l2,r1,r2;
            
            l1 = mid1-1>=0?nums1[mid1-1]:INT_MIN;
            l2 = mid2-1>=0?nums2[mid2-1]:INT_MIN;
            
            r1 = mid1<n1?nums1[mid1]:INT_MAX;
            r2 = mid2<n2?nums2[mid2]:INT_MAX;
            
            if(l1<=r2 and l2<=r1)
            {
                if(n%2){
                      res=max(l1,l2);
                     break;
                     
                }
                    
                else{
                     res=(max(l1,l2)+min(r1,r2))/2.0;
                    break;
                   
                }
                    
            }
            else if(l1>r2)
                high = mid1 - 1;
            else
                low = mid1+1;
        }
         (double)res;
    cout<<res<<endl;
}
int main(){
      
      vector<long>nums1{}
       
       helper(message);
    return 0;
}