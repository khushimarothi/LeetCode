class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        
        int n = grid.size();
        vector<vector<int>> res(n - 2, vector<int> (n - 2, 0));
        
        for(int i = 0; i< n - 2; i++){
            for(int j = 0; j < n-2; j++){
                int maxi = INT_MIN;
                for(int k = 0; k < 3; k++){
                    for(int l = 0; l < 3; l++){
                        maxi = max(maxi, grid[i + k][j + l]);
                    }
                }
                res[i][j] = maxi;
            }
        }
        
        return res;

    }
};