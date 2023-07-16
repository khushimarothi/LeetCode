class Solution {
public:
    int maximumBeauty(vector<int>& nums, int k) {
        int n = nums.size();
        
        map<int, int> mp; 
        for(int i = 0; i < n;i++) 
        { 
            mp[nums[i] - k]++; 
            mp[nums[i] + k + 1]--; 
        } 
        
        int temp = 0, ans = 0; 
        for(auto it : mp) 
        { 
            temp += it.second; 
            ans = max(ans, temp); 
        } 
        return ans; 
    }
};
