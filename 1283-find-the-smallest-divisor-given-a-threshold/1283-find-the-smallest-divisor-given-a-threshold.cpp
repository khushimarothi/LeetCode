class Solution {
public:
    int sum(vector<int>& nums, int div){
        int res = 0;
        for(int i = 0; i< nums.size(); i++){
            res += ceil((double)nums[i] / (double)div) ;
            
            
        }
        return res;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        
        int n = nums.size();
        int low = 1, high = *max_element(nums.begin(), nums.end());
        
        while(low <= high){
            int mid = (low+high) / 2;
            
            
            if(sum(nums, mid) <= threshold){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        
    

    return low;
    }
};