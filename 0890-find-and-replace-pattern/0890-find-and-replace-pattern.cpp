class Solution {
public:
    string make(string words){
        vector<char>v(26);
        int cnt=1;
        
        for(auto letter:words){
            if(!v[letter-'a']) v[letter-'a' ]=cnt++;
        }
        for(int i=0;i<words.length();i++){
            words[i]= v[words[i]-'a'];
        }
        return words;
    }
    
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> res;
        string n=make(pattern);
        
        for(auto word : words){
            if(make(word)==n) res.push_back(word);
            
        }
        return res;
    }
};