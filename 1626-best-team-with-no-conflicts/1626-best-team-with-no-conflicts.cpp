class Solution {
public:
    int bestTeamScore(vector<int>& scores, vector<int>& ages) {
     vector<vector<int>> a;
     int n=scores.size();
    for(int i=0;i<n;i++){
        a.push_back({-ages[i],-scores[i]});
        
    }
        sort(a.begin(),a.end());
        int dp[n];
        memset(dp, 0 ,sizeof dp);
        int ans =0;
        for(int i=0;i<n;i++){
            for(int j=i;j>=0;j--){
                if(-a[i][1]<= -a[j][1]){
                    dp[i]=max(dp[i], dp[j]-a[i][1]);
                }
            }
            ans=max(ans, dp[i]);
        }
        return ans;
        
    }
};