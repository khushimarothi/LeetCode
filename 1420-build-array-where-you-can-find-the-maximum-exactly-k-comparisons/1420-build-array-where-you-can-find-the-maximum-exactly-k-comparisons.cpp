class Solution {
public:
    int mod=1e9+7;
    int dp[51][101][101];
    int solve(int i,int len,int lar,int n,int m,int k){
        if(i==n){
            if(len==k){
                return 1;
            }
            return 0;
        }
        if(dp[i][len][lar]!=-1) return dp[i][len][lar];
        int ans=0;
        for(int num=1;num<=m;num++){
            if(num>lar){
                ans+=solve(i+1,len+1,num,n,m,k);
            }
            else ans+=solve(i+1,len,lar,n,m,k);
            ans=ans%mod;
        }
        return dp[i][len][lar]=ans;
    }
    
    int numOfArrays(int n, int m, int k) {
        memset(dp,-1,sizeof(dp));
        return solve(0,0,0,n,m,k);
    }
};