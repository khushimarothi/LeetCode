class Solution {
public:
    int missingNumber(vector<int>& nums) {
     int n=nums.size(), miss=n;
        for(int i=0;i<n;i++){
            miss^=i;
            miss^=nums[i];
        }
        return miss;   
    }
};