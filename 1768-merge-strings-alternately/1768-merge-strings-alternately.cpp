class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n = word1.length(), m=word2.length();
        
        string ans="";
        int u=0, v=0;
        int i=0;
        
        while(u!=n && v!=m){
            if(i%2 == 1){
                ans+=word2[v++];
            }
            else{
                ans+= word1[u++];
            }
            i++;
        }
        if(u!=n)ans+=word1.substr(u,n);
        
        if(v!=m) ans+= word2.substr(v,m);
        
        return ans;
        
    }
};