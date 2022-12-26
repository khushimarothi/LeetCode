class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n= nums.size();
        
        int max_reach=0;
        for(int i=0;i<n;i++){
            if(nums[i]+i>max_reach)
                max_reach=nums[i]+i;
            
            if(max_reach==i)break;
        }
        return max_reach>=(n-1);
    }
};