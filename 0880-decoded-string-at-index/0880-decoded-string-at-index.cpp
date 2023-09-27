class Solution {
public:
    string decodeAtIndex(string s, int k) {
        
        int n = s.size();
        long long a = 0;
        
        for(char &it: s){
            if(it -'0' >= 2 && it -'0' <= 9){
                a *= (it -'0');
            }
            else{
                a++;
            }
        }
        
        for(int i = n - 1; i >= 0; i--){
            k %= a;
            
            if(k == 0 && isalpha(s[i]) ){
                return string(1, s[i]);
            }
            
            if(isalpha(s[i])){
                a -= 1;
            }
            
            else{
                a /= (s[i] - '0');
            }
        }
        
        return "";
        
    }
};