class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        
        int n = nums.size();
        int i = nums[0];
        stack<pair<int,int>> st;
        
        for(int k = 1; k < n; k++){
           while(!st.empty() && st.top().first <= nums[k]){
               st.pop();
           }
            
           while(!st.empty() && st.top().second < nums[k] && nums[k] < st.top().first){
               return true;
           }
            st.push({nums[k], i});
            i = min(i, nums[k]);
            
        }
        return false;
    }
};