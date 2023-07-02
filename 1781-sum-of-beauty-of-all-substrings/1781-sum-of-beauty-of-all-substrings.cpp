class Solution {
public:
    int calc(vector<int> &v){
        int most = -1;
        int least = 1e9;
        for(int i = 0; i < 26; i++){
            most = max(most, v[i]);
            
            if( v[i] >= 1){
                least = min(least, v[i]);
            }
        }
        return most - least;
    }
    int beautySum(string s) {
        
        int ans = 0;
        for(int i = 0; i < s.size(); i++){
            vector<int> v(26,0);
            for(int j = i; j< s.size();j++){
                v[s[j] - 'a']++;
                ans = ans + calc(v);
            }
        }
        return ans;
    }
};