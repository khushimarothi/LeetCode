class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
       
        map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        vector<pair<int,int>> ans;
        for(auto i=mp.begin();i!=mp.end();i++)
            ans.push_back({i->second,i->first});
            
        sort(ans.begin(),ans.end());
         reverse(ans.begin(),ans.end());
        
         vector<int> t(k);
        for(int i=0;i<k;i++){
        t[i]=ans[i].second;
        } return t;
    }
};