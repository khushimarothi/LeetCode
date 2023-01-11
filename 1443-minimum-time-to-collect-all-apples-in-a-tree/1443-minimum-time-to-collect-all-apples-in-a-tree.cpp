class Solution {
public:
    vector<int> adj[100005];
    vector<bool> f;
    
    pair<int,int> dfs(int node,int p){
        pair<int,int> v={0,f[node]};
        
        for(auto x:adj[node]){
            if(x!=p){
                auto k=dfs(x,node);
                v.first+=(2+k.first)*k.second;
                v.second|=k.second;
            }
        }
        return v;
    }    
    int minTime(int n, vector<vector<int>>& edges, vector<bool>& hasApple) {
        for(int i=0;i<(int)edges.size();i++){
            adj[edges[i][0]].push_back(edges[i][1]);
             adj[edges[i][1]].push_back(edges[i][0]);
        }
        f=hasApple;
        return dfs(0,0).first;
    }
};