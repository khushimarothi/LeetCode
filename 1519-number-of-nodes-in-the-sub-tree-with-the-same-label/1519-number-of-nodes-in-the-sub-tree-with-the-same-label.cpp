class Solution {
public:
    vector<int> ans;
    vector<vector<int>> g;
    
vector<int> dfs(int s, int p, string& labels){
    
    vector<int> counter(26,0);
    counter[labels[s]-'a']++;
   
    
    for(int n:g[s]){
        if(n!=p){
            vector<int> t=dfs(n,s,labels);
            for(int i=0;i<26;i++){
                counter[i]+=t[i];
            }
        }
    }
    ans[s]=counter[labels[s]-'a'];
    return counter;
    
    
}    

    vector<int> countSubTrees(int n, vector<vector<int>>& edges, string labels) {
       ans.resize(n,0);
        g.resize(n,vector<int>{});
        
         for(auto it :edges){
            g[it[0]].push_back(it[1]);
            g[it[1]].push_back(it[0]);
            
        }
        
        
         dfs(0,-1,labels);
        
        return ans;
        
        
       
    }
};