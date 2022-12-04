class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        int n=nums.size();
         int temp=INT_MAX;
        
        long long post=0;
        long long pre=0;
        int index=0;
        
       for(auto x: nums){
           post+=x;
       }
        for(int i=0;i<n;i++){
            pre+=nums[i];
            post-=nums[i];
            
            int a=pre/(i+1);
            int b=(i==n-1)? 0 : post/(n-1-i);
            
            if(abs(a-b)<temp){
                temp=abs(a-b);
                index=i;
            }
        }
       
     
        
        return index;
    }
};