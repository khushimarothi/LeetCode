class Solution {
public:
    int find(int nums){
        
        int mx = 0;
        while(nums > 0){
            mx = max(mx, nums%10);
            nums /= 10;
        }
        return mx;
    }
    
    int maxSum(vector<int>& nums) {
        int maxi = -1;
        int n = nums.size();
        
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                if(find(nums[i]) == find(nums[j])){
                    maxi = max(maxi, nums[i]+nums[j]);
                }
            }
        }
        return maxi;
    }
};