class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=1;i<n;i++){
            nums[i]+=nums[i-1];
        }
        vector<int> ans;
        for(int i:queries){
            int res=upper_bound(nums.begin(),nums.end(),i)-nums.begin();
            ans.push_back(res);
        }
        return ans;
    }
};