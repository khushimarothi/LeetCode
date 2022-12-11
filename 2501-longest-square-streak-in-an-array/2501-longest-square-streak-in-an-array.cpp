class Solution {
public:
    int longestSquareStreak(vector<int>& nums) {
       int ans=-1,n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            long long x=1ll*nums[i];
            long long p=x*x;
            
            if(binary_search(nums.begin(),nums.end(),p)){
                int len=1;
                
                while(binary_search(nums.begin(),nums.end(),p)){
                    len++;
                    p=p*p;
                }
                ans=max(ans,len);
            }
        }
        
        return ans;
    }
};