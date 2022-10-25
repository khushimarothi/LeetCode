class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int count=0;
        int n=nums.size();
        for(int i=0;i<n;){
            count++;
            int max=nums[i]+k;
            while(i<n && nums[i]<=max){
                i++;
            }
        } return count;
    }
};