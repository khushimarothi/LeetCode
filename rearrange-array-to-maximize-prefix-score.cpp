//https://leetcode.com/problems/rearrange-array-to-maximize-prefix-score/

class Solution {
public:
    int maxScore(vector<int>& nums) {
     sort(nums.begin(),nums.end(), greater<int>());
        
        int n = nums.size();
        vector<long long> prefix(n);
        int ans = 0;

        prefix[0]= nums[0];
        
        if(prefix[0]>0) ans++;
        
        for(int i =1;i<n;i++){
            prefix[i]=prefix[i-1]+nums[i];
            
            if(prefix[i] > 0) ans++;
        }
        
        return ans;
    }
};
