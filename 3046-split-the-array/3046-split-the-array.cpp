class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> mp;
        
        for(auto it: nums){
            mp[it]++;
            
            if (mp[it] > 2) {
            return false;
           }
        }
        return true;     
        
    }
};