class Solution {
    private: int effort[105][105];
    int dx[4] = {0, 1,-1,0};
    int dy[4] = {1,0,0,-1};
public:
    int dijikstra(vector<vector<int>>& heights){
        
        int r = heights.size();
        int c = heights[0].size();
        priority_queue<pair<int, pair<int, int>>> pq;
        pq.push({0, {0,0}});
        effort[0][0] = 0;
        
        while(!pq.empty()){
            auto cur = pq.top().second;
            int cost = -pq.top().first;
            pq.pop();
            
            int x = cur.first;
            int y = cur.second;
            
            if(cost > effort[x][y])
                continue;
            if(x == r-1 && y == c-1)
                return cost;
            
            for(int i = 0;i < 4; i++){
                int new_x = x+ dx[i];
                int new_y = y+ dy[i];
                if(new_x < 0 || new_x >= r || new_y < 0 || new_y >= c)
                    continue;
                
                int n_eff = max(effort[x][y], abs(heights[x][y] - heights[new_x][new_y]));
                if(n_eff < effort[new_x][new_y]){
                    effort[new_x][new_y] = n_eff;
                    pq.push({-n_eff, {new_x, new_y}});
                }
            }
        }
        return effort[r - 1][c - 1];
    }
    
    int minimumEffortPath(vector<vector<int>>& heights) {
        
        for(int i = 0; i < heights.size(); i++){
            for(int j = 0; j < heights[i].size(); j++){
                effort[i][j] = INT_MAX;
            }
        }
        return dijikstra(heights);
    }
};