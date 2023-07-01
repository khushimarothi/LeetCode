class Solution {
public:
    int minSteps(string s, string t) {
        
        unordered_map<char, int> mp;
        
        for(auto it : s){
            mp[it]++;
        }
        
        for(auto it : t){
            mp[it]--;
        }
        
        int ans = 0;
        
        for(auto it: mp){
            ans += abs(it.second);
        }
        
        return ans/2;
    }
};