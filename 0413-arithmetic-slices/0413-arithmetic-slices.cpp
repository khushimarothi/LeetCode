class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int n = nums.size();
        
        if(n<3)
            return false;
        
        int cnt = 0 ,ind=0; 
        int prevdiff = nums[1] - nums[0];
        
        for(int i=2; i<n; i++){
            int diff = nums[i] - nums[i-1];
            if(diff == prevdiff){
                ind++; 
            }
           else{
               prevdiff = diff;
               ind = 0;
           }
           cnt += ind;
        }
        return cnt;
    }
};