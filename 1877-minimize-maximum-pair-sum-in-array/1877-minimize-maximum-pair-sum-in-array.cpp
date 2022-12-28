class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int left=0,right=nums.size()-1;
        
        int maxi=0;
        while(left<right){
            maxi=maxi>(nums[left++]+nums[right--])?maxi:(nums[left-1]+nums[right+1]);
        }
        return maxi;
    }
};