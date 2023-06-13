class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        
        int n = grid.size();
        int m = grid[0].size();
        
        int ans = 0;
        unordered_map<string, int> cnt;
        for(int i= 0; i < n; i++){
            string r = "";
            
            for(int j = 0; j < m; j++){
                r += to_string(grid[i][j])+ ",";
            }
            
            cnt[r]++;
        }
        
        for(int i = 0; i < n; i++){
            string col = "";
            
            for(int j = 0; j < m; j++){
                col += to_string(grid[j][i])+ ",";
            }
            ans += cnt[col];
        }
        return ans;
    }
};