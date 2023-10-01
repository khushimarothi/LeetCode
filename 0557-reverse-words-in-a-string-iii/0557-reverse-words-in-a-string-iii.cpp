class Solution {
public:
    string reverseWords(string s) {
        
        int n = s.length();
        
        int i=0, j =0;
        
        while(i < n){
            while(j < n and s[j] != ' '){
                    j++;
                
            }
            reverse(s.begin()+i, s.begin()+j);
            i = j + 1;
            j = i;
        }
        return s;
    }
};