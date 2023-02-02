class Solution {
public:
    unordered_map<char,int> mp;
    
    bool compare(string& one, string& two){
        int m= one.length(), n=two.length();
        for(int i=0;i<min(m,n);i++){
            if(mp[one[i]]<mp[two[i]]) return true;
            
            else if(mp[one[i]]> mp[two[i]]) return false;
        }
        
        
        if(n>=m) return true;
        return false;
    }
    
    bool isAlienSorted(vector<string>& words, string order) {
        
        for(int i=0;i<order.length();i++){
            mp[order[i]]=i;
        }
        int n=words.size();
        for(int i=0;i<n-1;i++){
            if(!compare(words[i],words[i+1])) return false;
        }
        
        return true;
    }
};