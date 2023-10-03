class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0;
        //brute force
        
        // for(int i = 0; i < n; i++){
        //     for(int j = i+1; j < n; j++){
        //         if(nums[i] == nums[j]){
        //             cnt++;
        //         }
        //     }
        // }
        
        
        unordered_map<int, int> mp;
        for(int &it: nums){
            mp[it]++;
        }
        
        for(auto &it:mp){
            n = it.second;
            cnt += (n * (n - 1))/2;
        }
        
        return cnt;
    }
};