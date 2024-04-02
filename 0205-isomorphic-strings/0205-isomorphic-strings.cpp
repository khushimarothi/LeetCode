class Solution {
public:
    bool isIsomorphic(string s, string t) {
        
        if(s.length() != t.length()){
            return false;
        }
        
        unordered_map<char, char>  mp;
        
       for(int i = 0; i < s.length(); i++){
           
           int char1 = s[i];
           int char2 = t[i];
           if(mp.find(char1) == mp.end()){
               mp[char1] = char2;
           }
           else if(mp[char1] != char2){
               return false;
           } 
           
           for(auto& it : mp) {
            if(it.second == char2 && it.first != char1) {
                return false;
            }
         }
       }
        return true;
    }
};