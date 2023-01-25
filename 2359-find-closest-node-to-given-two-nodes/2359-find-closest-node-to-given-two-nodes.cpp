class Solution {
public:
    void dfs(vector<int>& edges, int node, vector<int>& dist, vector<int>& visit, int distance){
        if(node ==-1 || visit[node]== 1) return ;
        
        visit[node]=1;
        dist[node] = distance;
        
        dfs(edges, edges[node], dist, visit, distance+1);
    }
    
    
    int closestMeetingNode(vector<int>& edges, int node1, int node2) {
       int n=edges.size();
        vector<int> dist1(n,-1);
        vector<int> dist2(n,-1); 
        
        vector<int> visit(n,0);
        
        dfs(edges,node1, dist1, visit, 0);
        
        vector<int> visit2(n,0);
        dfs(edges, node2, dist2, visit2, 0);
        
        int ans=-1;
        int value = n;
        
        for(int i=0;i<n;i++){
            if(dist1[i]!= -1 && dist2[i]!=-1){
                if(max(dist1[i], dist2[i]) < value){
                    value = max(dist1[i], dist2[i]);
                    ans = i;
                }
            }
        }
        return ans;
    }
};