class Solution {
public:
    int distinctAverages(vector<int>& nums) {
      sort(nums.begin(),nums.end());
        int n=nums.size();
        int sum=0;
        set<int> res;
        for(int i=0;i<n/2;i++){
         sum=nums[i]+nums[n-i-1];
            res.insert(sum);
        }
        return res.size();
    }
};