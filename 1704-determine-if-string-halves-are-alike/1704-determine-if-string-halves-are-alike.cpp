class Solution {
public:
    
    bool isVowel(char c){
        if(32&c)
            c^=32;
            
        if(c=='A' || c=='E' ||c=='I' || c=='O' || c=='U')return true;
        
        return false;
    }
    
    bool halvesAreAlike(string s) {
        int n=s.length();
        
        int l=0, h=0;
        for(int i=0;i<n/2;i++){
            if(isVowel(s[i])) l++;
        }
        for(int i=n/2;i<n;i++){
            if(isVowel(s[i])) h++;
        }
        return l==h;    }
};