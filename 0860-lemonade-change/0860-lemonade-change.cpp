class Solution {
public:
    bool lemonadeChange(vector<int>& nums) {
        int n = nums.size();
        int cng5 = 0, cng10 = 0 ;
        if(nums[0] != 5) return false;
        
        for(int i = 0; i< n; i++){
            if(nums[i] == 5){
                cng5++;
            }   
            else if(nums[i] == 10){
                if(cng5 == 0) 
                    return false;
                cng5--;
                cng10++;
            }
                else{
                    if(cng5 > 0 && cng10 > 0){
                        cng5--;
                        cng10--;
                    }
                    else if(cng5 >=3){
                        cng5 -= 3;
                    }
                    else{
                        return false;
                    }
                }
            }
        
        return true;
    }
};