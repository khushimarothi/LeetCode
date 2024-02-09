class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        
        vector<int> dp(n, 1);
        vector<int> v(n, -1);
        
        int maxi = 0;
        
        for(int i = 1; i < n; i++){
            for(int j = 0; j < i; j++){
                if(nums[i] % nums[j] == 0 ){
                    if(dp[i] < dp[j] + 1){
                       dp[i] = dp[j] + 1;
                    v[i] = j;
                    }
                }
            }
            if(dp[i] > dp[maxi]){
                maxi = i;
            }
        }
        
        vector<int> ans;
        while(maxi != -1){
         ans.push_back(nums[maxi]);
            maxi = v[maxi];
        }
        return ans;
        
    }
};