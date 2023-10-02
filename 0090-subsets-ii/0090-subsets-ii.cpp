class Solution {
public:
    vector<vector<int>> helper(int ind, vector<int> &nums, vector<int> &dup, vector<vector<int>> &ans) {
        
         ans.push_back(dup);
        
         for(int i = ind; i < nums.size(); i++) {
            if(i != ind && nums[i] == nums[i - 1]) {
                continue;
            }
             
            dup.push_back(nums[i]);
            helper(i + 1, nums, dup, ans);
            dup.pop_back();
         }
        return ans;
    }
        
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> dup;
        
        sort(nums.begin(), nums.end());
        helper(0,nums, dup,ans );
        
        return ans;
    }
};