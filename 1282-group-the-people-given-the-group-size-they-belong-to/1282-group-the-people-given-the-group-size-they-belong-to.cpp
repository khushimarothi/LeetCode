class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& group) {
       int n =group.size();   
        
        vector<vector<int>>ans;
        for(int i=1;i<=n;i++){
            vector<int> sub;
            
            for(int j=0;j<n;j++){
                if(group[j]==i){
                    if(sub.size()>=i){
                        ans.push_back(sub);
                        sub.clear();
                    }
                    sub.push_back(j);
                }
            }
            if(sub.size()){
                ans.push_back(sub);
            }
        }
        return ans;
    }
};