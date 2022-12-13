class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
     int n = matrix.size();
      for(int i =n-2;i>=0;i--){
         for(int j =0;j<n;j++){
            int x1 = j-1<0?INT_MAX:matrix[i+1][j-1];
            int x2 = matrix[i+1][j];
            int x3 = j+1>=n?INT_MAX:matrix[i+1][j+1];
            matrix[i][j]+= min({x1,x2,x3});
         }
      }
      int ans = INT_MAX;
      for(int i =0;i<n;i++){
         ans = min(ans,matrix[0][i]);
      }
      return ans;   
    }
};