class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        
        int n = nums.size();
        
        int l = 0, h = n - 1;
        
        while(l < h){
            
            if(nums[l] % 2 == 0){
                l++;
            }
            else{
                swap(nums[l], nums[h--]);
            }
        }
        return nums;
    }
};