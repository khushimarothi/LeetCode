class Solution {
     
public:
    int mod = 1e9+7;
    int sol( int target,int one, int zero, vector<int>&dp ){
        if(target == 0) return 1;
        
        if(target<0) return 0;
        
        if(dp[target]!=-1) return dp[target];
        
        long long sum;
        
        sum= sol(target-one, one,zero,dp)+ sol(target-zero,one,zero,dp);
        
        return dp[target]= sum%mod;
    }
    
   
    
    int countGoodStrings(int low, int high, int zero, int one) {
        
        
        int ans=0;
        vector<int> dp(high+1,-1);
        
        for(int i=low;i<=high;i++){
            ans= ((ans%mod) + sol(i,one,zero,dp) ) %mod;
        }
        
        return ans;
        
    }
};