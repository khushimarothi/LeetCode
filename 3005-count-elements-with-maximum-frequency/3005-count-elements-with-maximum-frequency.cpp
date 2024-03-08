class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        
        int n = nums.size();
        int maxi = 0;
        
        unordered_map<int, int> mp;
        for(int it: nums){
            mp[it]++;
        }
        
        for(auto& it: mp){
            maxi = max(maxi, it.second);
        }
        
        int res = 0;
        for(auto& it: mp){
            if(it.second == maxi){
                res++;
            }
        }
        return res*maxi;
    }
};