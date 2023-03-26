class Solution {
public:
    vector<long long> minOperations(vector<int>& nums, vector<int>& queries) {
        
        sort(nums.begin(),nums.end());
        vector<long long> result;
        
        int n= nums.size();
        vector<long long> inc(n+1);
        
        for(int i=0;i<n;i++){
            inc[i+1]=inc[i]+ (long long) nums[i];
        }
        for(int it: queries){
            int i = lower_bound(nums.begin(),nums.end(),it) - nums.begin();
            result.push_back(1LL * it *(2*i-n)+inc[n] - 2* inc[i]);
        }
        return result;
        
    }
};
