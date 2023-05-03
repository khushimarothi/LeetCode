class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        
        vector<vector<int>> ans;
        unordered_set<int> set1(nums1.begin(), nums1.end());
        unordered_set<int> set2(nums2.begin(), nums2.end());
        
        for(int num:nums2) {
           set1.erase(num);
        }
        vector<int> ans1;
        for(auto it: set1){
            ans1.push_back(it);
        }

        ans.push_back(ans1);
        ans1.clear();
        
        
        for(int num:nums1) {
           set2.erase(num);
        }
        
        for(auto it: set2){
            ans1.push_back(it);
        }

        ans.push_back(ans1);
        
        
        return ans;
    }
};