class Solution {
    void permutation(vector<int>& nums,int i,int &numsize, vector<vector<int>> &ans){
        if(i==numsize){
            ans.push_back(nums);
            
        }
        for(int j=i;j<numsize;j++){
            swap(nums[i],nums[j]);
            permutation(nums,i+1,numsize, ans);
            swap(nums[i],nums[j]);
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int numsize= nums.size();
        permutation(nums,0,numsize,ans);
        return ans;
    }
};
