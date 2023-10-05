class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        int n = nums.size();
        vector<int> ans;
        unordered_map<int, int> mp;
        
        int a = floor(n/3) + 1;
        for(int i = 0; i < n; i++){
            mp[nums[i]]++;
            
            if(mp[nums[i]] == a){
                ans.push_back(nums[i]);
            }
        }
        return ans;
    }
};