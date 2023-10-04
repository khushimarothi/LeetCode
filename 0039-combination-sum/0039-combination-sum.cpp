class Solution {
public:
    void helper(int i, vector<int>& candidates, int target, vector<vector<int>> &ans,vector<int> &v ){
        int n = candidates.size();
        
        if(i == n){
            if(target == 0){
                ans.push_back(v);
            }
            return;
        }
        
        if(candidates[i] <= target){
            v.push_back(candidates[i]);
            helper(i, candidates, target - candidates[i], ans, v);
            v.pop_back();
        }
        
        helper(i+1, candidates, target,ans, v);
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> v;
        vector<vector<int>> ans;
        helper(0, candidates, target, ans, v);
        return ans;
        
        
    }
};