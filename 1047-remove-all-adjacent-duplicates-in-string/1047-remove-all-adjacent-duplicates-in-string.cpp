class Solution {
public:
    string removeDuplicates(string s) {
       string k="";
        for(int i=0;i<(int)s.size();i++){
            if(k.size()>0 && k.back()==s[i]) k.pop_back();
            else k.push_back(s[i]);
        }
        return k;
    }
};