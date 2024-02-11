class Solution {
public:
    int func(vector<vector<int>>&grid,int row,int c1,int c2,vector<vector<vector<int>>>&dp)
    {
        int n = grid.size();
        int m = grid[0].size();

        if(row >= n)
        {
            return 0;  //no further cheeries
        }

        if(dp[row][c1][c2] != -1)
        {
            return dp[row][c1][c2];
        }
        
        int cheery = grid[row][c1];
        if(c1 != c2)
        {
            cheery += grid[row][c2];
        }

        int ans = 0;
        for(int i = -1;i <= 1;i++)
        {
            for(int j = -1;j <= 1;j++)
            {
                int new_row = row + 1;
                int new_c1  = c1 + i;
                int new_c2  = c2 + j; 

                if(new_c1 >=0 && new_c1 < m && new_c2 >=0 && new_c2 < m)
                {
                    ans = max(ans,func(grid,new_row,new_c1,new_c2,dp));
                }
              
            }
        }

        return dp[row][c1][c2] =  cheery + ans;
    }
    int cherryPickup(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<vector<int>>> dp(71,vector<vector<int>>(71, vector<int>(71,-1)));
        return func(grid, 0, 0, m-1, dp);
        
    }
};