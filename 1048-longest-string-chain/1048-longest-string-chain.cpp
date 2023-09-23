class Solution {
public:
    
    static bool compare(const string &s1, const string &s2){
        return s1.length() < s2.length();
    }
    
    int longestStrChain(vector<string>& words) {
        sort(words.begin(), words.end(), compare);
        int ans = 0;
        
        unordered_map<string, int> mp;
        for(string it : words){
            int t = 0;
            for(int i = 0; i < it.length(); i++){
                string s = it;
                s.erase(i, 1);
                t = max(t, mp[s]+1);
            }
            mp[it] = t;
            ans = max(ans, t);
            
        }
        return ans;
    }
};