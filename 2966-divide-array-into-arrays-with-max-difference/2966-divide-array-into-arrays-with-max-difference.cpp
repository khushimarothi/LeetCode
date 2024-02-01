class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        
      int n = nums.size();
      vector<vector<int>> res;
        
      sort(nums.begin(), nums.end());

      for(int i = 0; i < n; i += 3) {
        if(i + 2 < n && nums[i + 2] - nums[i] > k) {
            return {};
        }

        vector<int> cur = {nums[i]};
        if(i + 1 < n) {
            cur.push_back(nums[i + 1]);
        }
        if(i + 2 < n) {
            cur.push_back(nums[i + 2]);
        }

        res.push_back(cur);
    }

    return res;
    }
};