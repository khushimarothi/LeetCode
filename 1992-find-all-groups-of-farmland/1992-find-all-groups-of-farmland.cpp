class Solution {
public:
    vector<vector<int>> res;
     void helper(int x , int y , vector<vector<int>> &land)
    {
        bool up   = (x - 1 < 0 or land[x - 1][y] == 0);
        bool left = (y - 1 < 0 or land[x][y - 1] == 0);
        
        bool right = (y + 1 >= land[0].size() or land[x][y + 1] == 0);
        bool down  = (x + 1 >= land.size() or land[x + 1][y] == 0);
        
        if(up and left)
            res.push_back({x , y});
        if(right and down)
            res.back().push_back(x) , res.back().push_back(y);
    }
    
     void dfs(int x , int y , vector<vector<int>> &land)
    {
        if(x < 0 or y < 0 or x == land.size() or y == land[0].size() or land[x][y] == -1 or land[x][y] == 0)
            return;
        
        helper(x , y , land);
        
        land[x][y] = -1; 
        dfs(x - 1 , y , land); 
        dfs(x + 1 , y , land); 
        dfs(x , y - 1 , land); 
        dfs(x , y + 1 , land);    
    }
    
    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
      for(int i = 0 ; i < land.size() ; ++i)
            for(int j = 0 ; j < land[0].size() ; ++j)
                if(land[i][j] == 1)
                    dfs(i , j , land);
        return res;
    }
};