class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        
        bool check = false, check2 = false;
        
        for(int i = 0; i < nums.size() - 1; i++){
            if(nums[i] < nums[i+1]){
                check = true;
            }
            if(nums[i] > nums[i+1]){
                check2 = true;
            }
        }
        
        if(check == true && check2 == true){
            return false;
        }
        
        return true;
    }
};