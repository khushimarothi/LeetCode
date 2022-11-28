class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        set<int> win,loser;
        
        unordered_map<int,int> mp;
        
        for(auto it:matches){
            win.insert(it[0]), loser.insert(it[1]), mp[it[1]]++;
        }
        
        vector<int> a,b;
        vector<vector<int>> ans; 
        
        for(auto it:win){
            if(mp.find(it)==mp.end())
                a.push_back(it);
        }
        
        for(auto it: loser){
            if(mp[it]==1) b.push_back(it);
        }
        
        ans.push_back(a);
        ans.push_back(b);
        
        return ans;
        
    }
};