class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans(n,vector<int>(n,0));
        
        int cnt=0;
        int startrow=0, endrow=n-1;
        int startcol=0, endcol=n-1;
        int total=n*n;
        
        while(cnt<total){

        
            for(int i=startcol;i<=endcol && cnt<total;i++){
                cnt++;
                ans[startrow][i]=cnt;
            }
            startrow++;
            
            for(int i=startrow;i<=endrow && cnt<total;i++){
                cnt++;
                ans[i][endcol]=cnt;
            }
            endcol--;
            
            for(int i=endcol;i>=startcol && cnt<total;i--){
               
                cnt++;
                ans[endrow][i]=cnt;
            }
            endrow--;
            
            for(int i= endrow;i>=startrow && cnt<total;i--){
                cnt++;
                ans[i][startcol]=cnt;
            }
            startcol++;
        }
        return ans;
        
    }
};