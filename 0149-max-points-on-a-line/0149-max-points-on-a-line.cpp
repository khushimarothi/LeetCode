class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
      int n=points.size();
       int ans=1;
        
        for(int i=0;i<n;i++){
            unordered_map<double,int> m;
            for(int j=i+1;j<n;j++){
                if(points[i][0] == points[j][0]){
                    m[1000001]++;
                }
                else{
                    double slope=(double)(points[j][1]-points[i][1])/(double)(points[i][0]-points[j][0]);
                    m[slope]++;
                }
            }
            
            
            int temp=0;
            for(auto x:m){
                temp=max(temp,x.second);
            }
            
            ans=max(ans,temp+1);
        }
        return ans;
    }
};