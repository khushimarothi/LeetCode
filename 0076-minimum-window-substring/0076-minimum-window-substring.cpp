class Solution {
public:
    string minWindow(string s, string t) {
        
        unordered_map<char, int> freqt;
        
        for(char it: t){
            freqt[it]++;
        }
        
        int uni = freqt.size(), a = 0;
        int l = 0, r = 0, st = 0;
        int size = INT_MAX;
        
        unordered_map<char, int> freqs;
        
        while(r < s.length()){
            freqs[s[r]]++;
            
            if(freqt[s[r]] == freqs[s[r]])
                a++;
            
            while(l <= r && a == uni){
                if(r-l+1 < size){
                    st = l;
                    size = r - l +1;
                }
                
                freqs[s[l]]--;
                if(freqs[s[l]] < freqt[s[l]]){
                    a--;
                }
                l++;
            }
            r++;
        }
        
        return  size == INT_MAX ? "" : s.substr(st,size);        
    }
};