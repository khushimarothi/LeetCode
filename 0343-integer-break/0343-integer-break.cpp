class Solution {
public:
    int dp[60];
    int helper(int  n ){
        if(n == 0) return 0;
        if(dp[n] !=0) return dp[n];
        
        int ans = 0;
         for(int i = 1; i <= n/2; i++){
             ans = max(ans, max(i, helper(i)) * max(n-i, helper(n-i)));
         }
        return dp[n] = ans;
    }
    int integerBreak(int n) {
        
        dp[0] = 0;
        dp[1] = 1;
        dp[2] = 1;
        
        return helper(n);
        
    }
};