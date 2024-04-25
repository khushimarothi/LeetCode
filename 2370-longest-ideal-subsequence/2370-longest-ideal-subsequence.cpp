class Solution {
public:
    int longestIdealString(string s, int k) {
    
       int n = s.length();
       vector<int> dp(26, 0);
       int res = 0;

       for(int i = 0; i < n; i++) {
          int cur = s[i] - 'a';
          int best = 0;
          for(int prev = 0; prev < 26; prev++) {
            if(abs(prev - cur) <= k) {
               best = max(best, dp[prev]);
            }
        }

        dp[cur] = best + 1;
        res = max(res, dp[cur]);
    }
        
    return res;
     
    }
};