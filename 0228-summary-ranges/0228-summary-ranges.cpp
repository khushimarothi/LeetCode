class Solution {
public:
   
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;
        int n = nums.size();
        
        if(n == 0){
            return ans;
        }
        
        for(int i = 0; i < n;){
            
            int s = i, end = i;
            
            while(end + 1 < n && nums[end + 1] == nums[end]+1){
                end++;
            }
            
            if( end > s){
                ans.push_back(to_string(nums[s] )+  "->" + to_string(nums[end]));
            }
            else{
                ans.push_back(to_string(nums[s]));
            }
            i = end+1;
        }
        
        return ans;
    }
};