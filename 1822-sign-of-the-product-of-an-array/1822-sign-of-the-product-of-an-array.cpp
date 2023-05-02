class Solution {
public:
    int arraySign(vector<int>& nums) {
        
        int n= nums.size(), cnt=0;
        
        for(int i=0;i<n;i++){
            if(nums[i]==0) 
                return 0;
            else if(nums[i]<0)
                cnt++;
        }
        if(cnt%2==0)
            return 1;
        
        else return -1;
    }
};