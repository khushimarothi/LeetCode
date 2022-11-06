class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long ans=0,sum=0;
        unordered_set<int> h;
        
        int n=nums.size(), i=0,j=0;
        while(i<n-k+1){
            if(j-i==k){
                ans=max(ans,sum);
                sum-=nums[i];
                h.erase(nums[i++]);
            }
            else if(!h.count(nums[j])){
                sum+=nums[j];
                h.insert(nums[j++]);
            }
            else{
                sum-=nums[i];
                h.erase(nums[i++]);
            }
        }
        return ans;
    }
};