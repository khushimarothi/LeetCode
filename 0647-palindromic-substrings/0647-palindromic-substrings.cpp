class Solution {
public:
    int countSubstrings(string s) {
        int n = s.size();
        vector<vector<bool>> dp(n, vector<bool>(n,false));
        
        int cnt = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0, k = i; k < n; j++, k++){
                if(i == 0){
                    dp[j][k] = true;
                }
                else if(i == 1){
                    if(s[j] == s[k]){
                        dp[j][k] = true;
                    }
                    else {
                        dp[j][k] = false;
                    }
                }
                else{
                    if(s[j] == s[k]){
                        dp[j][k] = dp[j+1][k-1];
                    }
                    else{
                        dp[j][k] = false;
                    }
                }
                
                if(dp[j][k]){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};