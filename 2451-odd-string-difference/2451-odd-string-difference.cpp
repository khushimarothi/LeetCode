class Solution {
public:
    string oddString(vector<string>& words) {
        
        map<vector<int>, vector<string>> mp;
        for(string word:words){
            vector<int> temp;
            for(int i=1;i<word.size();i++){
                temp.push_back((int)word[i]-(int)word[i-1]);
            }
            mp[temp].push_back(word);
        }
        for(auto it: mp){
            if(it.second.size()==1) return it.second[0];
        }
        return "";
    }
};