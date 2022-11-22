class Solution {
public:
    int maximumTop(vector<int>& nums, int k) {
        int n=nums.size();
        if(n==1 && k%2) return -1;
        if(k==1) return nums[1];
        
        int ans=0;
        if(k>n){
            for(int i=0;i<n;i++) ans=max(ans,nums[i]);
            return ans;
        }
        else if(k==n){
            for(int i=0;i<k-1;i++) ans=max(ans,nums[i]);
            return ans;
        }
        else{
             for(int i=0;i<k-1;i++) ans=max(ans,nums[i]);
             return max(ans,nums[k]);
        }
    }
};