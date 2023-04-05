class Solution {
public:
    int minimizeArrayValue(vector<int>& nums) {
      int n = nums.size();
        
      long long num=nums[0], prefix=nums[0];
      
    
    for(int i=1;i<n;i++){
        prefix+=nums[i];
        if(nums[i]>num){
            int a = prefix/(i+1);
            if(a>= num){
                if(prefix%(i+1)){
                    num = a+1;
                    
                }
                else{
                    num=a;
                }
                    
            }
        }
    }
        return num;
    }
};