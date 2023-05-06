class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        
        int n =nums.size();
        sort(nums.begin(),nums.end());
        
        int ans=0, mod=1e9+7;
        
        vector<int>pow(n,1);
        int l=0,r=n-1;
        
        for(int i=1;i<n;i++){
            pow[i]=(pow[i-1]*2)%mod;
        }
        
        while(l<=r){
            if(nums[l]+nums[r]>target){
                r--;
            }
            else{
                ans=(ans+pow[r-l])%mod;
                l++;
            }
        }
        return ans;
    }
};