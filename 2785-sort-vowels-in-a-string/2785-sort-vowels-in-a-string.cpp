class Solution {
public:
    bool check(char c){
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'|| c == 'A'|| c == 'E' || c == 'I' || c == 'O' || c == 'U')
            return true;
        
        return false;
    }
    string sortVowels(string s) {
        
        string temp ="";
        for(auto it: s){
            if(check(it)){
                temp += it;
            }
            
        }
        int j =0;
        sort(temp.begin(), temp.end());
        for(int i = 0; i < s.size();i++){
            if(check(s[i])){
                s[i] = temp[j];
                j++;
            }
        }
        return s;
    }
};