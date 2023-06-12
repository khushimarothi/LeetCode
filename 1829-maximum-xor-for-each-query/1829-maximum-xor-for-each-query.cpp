class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        vector<int> ans;
        
        int n = nums.size();
        for(int i = 1; i < n; i++){
            nums[i] = nums[i]^nums[i-1];
            
        }
        
        int p = pow(2, maximumBit) - 1;
        
        for(int i = n -1; i >= 0;i--){
            
            ans.push_back(p - nums[i]);
        }
        
        return ans;
    }
};