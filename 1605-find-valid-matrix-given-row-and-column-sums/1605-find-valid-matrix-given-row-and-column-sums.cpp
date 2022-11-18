class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {
       
        int n=rowSum.size();
        int m=colSum.size();
         vector<vector<int>> ans(n,vector<int>(m,0));
        
        int i=0,j=0;
        while(i<n && j<m){
            int x=min(rowSum[i],colSum[j]);
            ans[i][j]=x;
            rowSum[i]-=x;
            colSum[j]-=x;
            if(rowSum[i]==0)i++;
            if(colSum[j]==0)j++;
        }
        return ans;
    }
};