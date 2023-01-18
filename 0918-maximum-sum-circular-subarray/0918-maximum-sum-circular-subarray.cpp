class Solution {
public:
    int kadane(vector<int>& nums){
        
        int maxi=INT_MIN;
        int currmax=0;
        
        for(auto i:nums){
           currmax+=i;
            
            if(currmax>maxi){
                maxi=max(maxi,currmax);
            }
            
            if(currmax<0){
                currmax=0;
            }
        }
        return maxi;
        
    }
    
    int maxSubarraySumCircular(vector<int>& nums) {
        int kadane_sum = kadane(nums);
        
        int cntpositive = 0;
        int total_sum_rev = 0;
        
        for(int i=0;i<nums.size();i++){
            nums[i]=-1*nums[i];
            
            if(nums[i]>0) {cntpositive++;}
            total_sum_rev+=nums[i];
        }
        if(cntpositive == nums.size()){
            return kadane_sum;
        }
        
        int kadane_sum_r=kadane(nums);
        
        int ans=-1*(total_sum_rev - kadane_sum_r);
        
        return max(kadane_sum, ans);
        
    }
};