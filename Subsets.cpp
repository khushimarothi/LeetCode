class Solution {
      vector<vector<int>> help(vector<int>& nums, int i){
        
          if(i>=nums.size()) return {{}};
     vector<vector<int>> partans= help(nums,i+1);
      vector<vector<int>> ans;
          for(vector<int> x:partans){
              ans.push_back(x);
          }
          for(vector<int> x:partans){
              x.push_back(nums[i]);
              ans.push_back(x);
          }
          return ans;
          
          
      }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        
       return help(nums,0);
    }
};
