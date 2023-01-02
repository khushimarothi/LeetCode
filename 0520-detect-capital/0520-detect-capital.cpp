class Solution {
public:
    bool detectCapitalUse(string word) {
        int n=word.size();
        int upper=0;
        for(int i=0;i<n;i++)
            if(word[i]>='A' && word[i]<='Z')
                ++upper;
            
            if( upper==n or upper==0 or (word[0]>='A' and word[0]<='Z' and upper==1))
                return true;
            return false;
        
    }
};