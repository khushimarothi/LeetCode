class Solution {
public:
    int n;
    vector<int> dp;
    
    int find(int i,string& s, vector<string>& dictionary){
        
        if(i == n){
            return 0;
        }
        if(dp[i]!= -1){
            return dp[i];
        }
        int ans = n;
        
        for(string& it : dictionary){
            int len = it.size();
            if(i + len <= s.size() && s.substr(i, len) == it){
                int extra = find(i+len, s, dictionary);
                ans = min(ans ,extra);
            }
        }
        
        int no = 1+ find(i + 1, s, dictionary);
        ans = min(ans, no);
        return dp[i]=ans;
    }
    
    int minExtraChar(string s, vector<string>& dictionary) {
        
        n = s.size();
        dp.assign(n, -1);
        return find(0, s, dictionary);
    }
};