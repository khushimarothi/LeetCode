class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> sol;
        for(int i=0;i<n;i++){
            sol.emplace_back(nums[i]);
            sol.emplace_back(nums[i+n]);
        }
        return sol;
    }
};