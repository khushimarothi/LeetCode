class Solution {
public:
    int maxDepth(string s) {
        
        int cnt = 0;
        int ans = INT_MIN;
        
        for(int i = s.length() - 1; i >= 0; i--){
            if(s[i] == '('){
                cnt--;
            }
            else if(s[i] == ')'){
                cnt++;
            }
            ans = max(ans, cnt);
        }
        
        return ans;
    }
};