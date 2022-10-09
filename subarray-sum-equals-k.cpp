//https://leetcode.com/problems/subarray-sum-equals-k/

class Solution {
public:
    int subarraySum(vector<int>& nums, int z) {
       unordered_map <int,int> sums;
        int temp=0;
        sums[0]=1;
        int count=0;
        for(int i=0;i<nums.size();i++){
            temp+=nums[i];
            if(sums.find(z-temp)!=sums.end())
            {
                count+=sums[z-temp];
            }
            sums[-temp]++;
        }
        return count;
    }
};
