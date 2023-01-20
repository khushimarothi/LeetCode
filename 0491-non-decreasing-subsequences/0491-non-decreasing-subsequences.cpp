class Solution {
public:
    
    
    void help(int index, vector<int>&nums, set<vector<int>>& ans, vector<int>&curr){
       if(index==nums.size()){
           if(curr.size()>=2){
               ans.insert(curr);
           }
           return ;
           
       }
        
        if(curr.size()==0 || nums[index]>=curr.back()){
            curr.push_back(nums[index]);
            help(index+1, nums, ans, curr);
            curr.pop_back();
            help(index+1, nums,ans,curr);
        }
        else{
            help(index+1, nums, ans, curr);
        }
        
    }
    
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        set<vector<int>> ans;
        vector<int> curr;
        help(0,nums, ans, curr);
        return vector(ans.begin(), ans.end());
    }
};