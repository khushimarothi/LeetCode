class Solution {
public:
    bool closeStrings(string word1, string word2) {
        int n=word1.size();
        int m= word2.size();
        
        if(n!=m) return false;
        vector<int> fre1(26,0);
        vector<int> fre2(26,0);
        set<char> s1,s2;
        for(int i=0;i<n;i++){
            s1.insert(word1[i]);
            s2.insert(word2[i]);
            
            fre1[word1[i]-'a']++;
            fre2[word2[i]-'a']++;
        }
        sort(fre1.begin(),fre1.end());
        sort(fre2.begin(),fre2.end());
        
        if(fre1 ==fre2 && s1==s2) return true;
        
        return false;
    }
};