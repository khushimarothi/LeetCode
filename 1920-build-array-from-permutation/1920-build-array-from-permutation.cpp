class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int n=nums.size();
        for(auto& x:nums){
            x*=n;
        }
        for(int i=0;i<n;i++){
            nums[i]+=nums[nums[i]/n]/n;
        }
        for(auto& x:nums){
            x%=n;
        }
        return nums;
    }
};