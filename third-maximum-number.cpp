//https://leetcode.com/problems/third-maximum-number/

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        
        int id=n-1, discnt=0,i;
        while(id>=0){
            discnt++;
            i=id-1;
            while(i>=0 && nums[i]==nums[id])
                i--;
            
            if(i==-1){
                return nums[n-1];
            }
            id=i;
            if(discnt==2)
             return nums[id];
            }
        return -1;
    }
};
