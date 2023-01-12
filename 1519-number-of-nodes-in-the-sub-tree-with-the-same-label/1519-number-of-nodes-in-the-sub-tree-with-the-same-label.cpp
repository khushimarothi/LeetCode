class Solution {
public:
    
vector<int> dfs(vector<vector<int>>& adj, string& labels,int p, int cur, vector<int>& ans){
    
    vector<int> counter(26,0);
    char c=labels[cur]-'a';
    counter[c] =1;
    
    for(int n:adj[cur]){
        if(n!=p){
            vector<int> s=dfs(adj,labels,cur,n,ans);
            for(int i=0;i<counter.size();i++){
                counter[i]+=s[i];
            }
        }
    }
    ans[cur]=counter[c];
    return counter;
    
    
}    

    vector<int> countSubTrees(int n, vector<vector<int>>& edges, string labels) {
        vector<vector<int>> adj(n);
        
        vector<vector<int>> count(n,vector<int>(26,-1));
        
        for(vector<int>& edge:edges){
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
            
        }
        vector<int> ans(n,0);
        int p=-1;
        dfs(adj,labels,-1,0,ans);
        
        return ans;
    }
};