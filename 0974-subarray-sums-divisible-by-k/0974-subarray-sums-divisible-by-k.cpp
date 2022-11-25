class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map <int, int> mp;
      mp[0] = 1;
      int temp = 0;
      int ans = 0;
      int n = nums.size();
      for(int i = 0; i < n; i++){
         temp += nums[i];
         int x = (temp % k + k) % k;
         ans += mp[x];
         mp[x]++;
      }
      return ans;
        
        
    }
};