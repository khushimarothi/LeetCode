class Solution {
public:
    int numSquares(int n) {
        vector<int> dp(n+1,0);
        for(int x=1;x<=n;x++){
            int mini=x;
            int y=1, s=1;
            while(s<=x){
                mini=min(mini,1+dp[x-s]);
                y++;
                s=y*y;
            }
            dp[x]=mini;
        }
        return dp[n];
    }
};