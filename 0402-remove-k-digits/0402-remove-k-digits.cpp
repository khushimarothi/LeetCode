class Solution {
public:
    string removeKdigits(string num, int k) {
        
       string ans = "";
       int n = num.length();
        
        for(int i = 0; i < n; i++){
            while( k > 0 && ans.size() > 0 && num[i] < ans[ans.length()-1] ) {
                k--;
                ans.pop_back();
            }
            if(num[i] != '0' || ans.size() > 0) 
                ans += num[i];
        }
        
        while(ans.size() > 0 && k > 0){
            ans.pop_back();
            k--;
        }
        
        if(ans.length() == 0) 
            return "0";
        
        return ans;
    }
};