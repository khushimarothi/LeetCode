class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n= mat.size();
    
        int i=0,j=0, sum=0;
        
        while(i<n){
            sum+=mat[i][j];
            i++; j++;
        }
        
        i=0,j=n-1;
        
        while(i<n){
            if(i!=j)
                sum+=mat[i][j];
            i++;j--;

        }
        return sum;
    }
};