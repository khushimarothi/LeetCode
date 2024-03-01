class Solution {
public:
    string maximumOddBinaryNumber(string s) {
      int n = s.length(), cnt =0;
        
      string ans = "";
        
        for(int i = 0; i < n; i++){
            if(s[i] == '1')
                cnt++;
            
            ans += '0';
        }
        
        for(int i = 0; i < cnt - 1; i++){
            ans[i] = '1';
        }
        ans[n-1] = '1';
        
        return ans;
        
    }
};