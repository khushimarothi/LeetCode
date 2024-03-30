class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n = s.size();
        int l = 0, h = 0;
        map<char, int> mp;
        int maxi = 0;
        while(h < n){
            mp[s[h]]++;
            while(mp[s[h]] > 2){
                mp[s[l]]--;
                l++;
            }
            
            maxi = max(maxi, h - l + 1);
            h++;
        }
        return maxi;
    }
};