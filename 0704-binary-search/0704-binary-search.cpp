class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size()-1;
       while(low<=high){
           if(target==nums[low]){
               return low;
           }
           else if(target<nums[low]){
               high--;
           }
           else low++;
       }
        return -1;
    }
};