class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> mpp;
        for(auto it: nums){
            mpp[it]++;
        }
        int num = 0;
        for(auto it: mpp){
            if(it.second > num) {
                num = it.second;}
        }
        vector<vector <int>> ans(num);
        for(int i = 0;i < num;i++){
            for(auto it: mpp){
                if(it.second > 0){
                    ans[i].push_back(it.first);
                    mpp[it.first]--;
                }
            }
        }
        return ans;
    }
};