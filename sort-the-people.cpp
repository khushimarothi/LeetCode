//https://leetcode.com/problems/sort-the-people/

class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<int,string>> n1;
        int k=names.size();
        for(int i=0;i<k;i++){
            n1.push_back({heights[i],names[i]});
            
        }
        sort(n1.begin(),n1.end());
        vector<string> ans;
        for(int i=k-1;i>=0;i--){
            ans.push_back(n1[i].second);
        }
        return ans;
    }
};
