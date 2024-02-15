class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        
        int n = nums.size();
        sort(nums.begin(), nums.end());
        
        long long sum = 0;
        
        for(auto it : nums){
            sum += it;
        }
         
        for(int i = n - 1; i >= 2; i--){
             sum -= nums[i];

             if(sum > nums[i]){
                 return sum + nums[i];
             }
             
         }
        
        return -1;
         
    }
};