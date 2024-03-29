class Solution {
public:
    vector<string> findAllConcatenatedWordsInADict(vector<string>& words) {
        unordered_set<string> str(words.begin(),words.end());
        vector<string> res;
        for(const auto& word: words){
              vector<bool> dp(word.length()+1);
              dp[0]=true;
             for(int i=0;i<word.length();i++){
                 if(!dp[i]) continue;
             
            for(int j=i+1;j<=word.length();j++){
                if(j-i<word.length() && str.count(word.substr(i, j-i))){
                    dp[j]=true;
                }
            }
            if(dp[word.length()]){
                res.emplace_back(word);
                break;
            }
          }
        }
        return res;
    }
};