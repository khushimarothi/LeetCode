class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        int n = nums.size();
    sort(nums.begin(), nums.end());

    vector<vector<int>> result;
    for (int i = 0; i < n; i += 3) {
        if (i + 2 < n && nums[i + 2] - nums[i] > k) {
            // If the difference between the third element and the first element is greater than k, it's impossible.
            return {};
        }

        vector<int> currentArray = {nums[i]};
        if (i + 1 < n) {
            currentArray.push_back(nums[i + 1]);
        }
        if (i + 2 < n) {
            currentArray.push_back(nums[i + 2]);
        }

        result.push_back(currentArray);
    }

    return result;
    }
};