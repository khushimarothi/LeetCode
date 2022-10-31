class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int m=mat.size(), n=mat[0].size();
        int dian=(m-1)+1+(n-1);
        for(int k=0;k<dian;k++){
            vector<int> temp;
            for(int i=max(m-1-k,0),j=max(k-m+1,0);i<m && j<n;i++,j++){
                temp.push_back(mat[i][j]);
            }
            sort(temp.begin(),temp.end());
            for(int i=max(m-1-k,0),j=max(k-m+1,0), t=0;i<m && j<n;i++,j++,t++){
                mat[i][j]=temp[t];
            }
        }
        return mat;
    }
};