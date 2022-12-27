class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int aR) {
        int n=rocks.size();
        int m=capacity.size();
        vector<int> v(m); int cnt=0;
        
        for(int i=0;i<m;i++){
            v[i]=capacity[i]-rocks[i];
        }
        sort(v.begin(),v.end());
        
        for(int i=0;i<m;i++){
            if(v[i]==0) cnt++;
            
            else{
              if(aR>=v[i]){
                  aR-=v[i];
                  cnt++;
              }  
                else break;
            }
        }
        
        return cnt;
    }
};