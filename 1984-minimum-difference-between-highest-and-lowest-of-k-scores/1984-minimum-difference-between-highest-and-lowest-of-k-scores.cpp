class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int count=INT_MAX;
        for(int i=0;i<=(n-k);i++){
           int dif=nums[i+k-1]-nums[i];
            count=min(count,dif);
        }
        return count;
    }
};