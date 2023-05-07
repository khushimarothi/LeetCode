class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& nums) {
        int n = nums.size();
       
        vector<int> diff(n);
    
        for (int i = 0; i < n; i++) {
        
            unordered_set<int> prefix(nums.begin(), nums.begin() + i + 1);
            unordered_set<int> suffix(nums.begin() + i + 1, nums.end());
          
            diff[i] = prefix.size() - suffix.size();
    }

    return diff;
    }
};