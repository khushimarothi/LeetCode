class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        
        long long ans=0;
        
        for(int i=0;i<n; i++){
            int l=lower-nums[i], u=upper-nums[i];
            
            ans+=upper_bound(nums.begin()+(i+1), nums.end(), u)-lower_bound(nums.begin()+(i+1),nums.end(),l);
        }
        return ans;
    }
};