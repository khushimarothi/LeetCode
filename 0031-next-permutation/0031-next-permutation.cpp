class Solution {
public:
    void swap(vector<int>& nums, int i, int j){
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }
    
     void reverse(vector<int>& nums, int i, int j){
        while(i < j) swap(nums, i++, j--);
    }
    
    void nextPermutation(vector<int>& nums) {
        if(nums.size() <= 1) return;
        int i = nums.size() - 2;
        
        while(i >= 0 && nums[i] >= nums[i+1]) i--;
        if(i >= 0){
            int j = nums.size()-1;
            while(nums[j] <= nums[i]) j--;
            swap(nums, i, j);
        }
        reverse(nums, i+1, nums.size()-1);
    }
};