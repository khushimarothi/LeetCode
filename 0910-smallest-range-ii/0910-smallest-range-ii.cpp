class Solution {
public:
    int smallestRangeII(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        
        int n=nums.size();
        
         int minn=nums[0];
        int maxn=nums[n-1];
        
        int ans=maxn-minn;
        
        for(int i=0;i<n-1;i++){
            int cmax=max(maxn-k,nums[i]+k);
            int cmin=min(minn+k,nums[i+1]-k);
            ans=min(cmax-cmin,ans);
        }
        return ans;
    }
};