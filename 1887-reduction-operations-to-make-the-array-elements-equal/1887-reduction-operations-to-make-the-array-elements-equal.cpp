class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int res=0, cur=0;
        for(int i=1;i<n;i++){
            if(nums[i-1]<nums[i]){
                cur++;
            }
            res+=cur;
        }
        return res;
    }
};