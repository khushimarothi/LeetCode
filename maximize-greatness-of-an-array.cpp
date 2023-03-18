//https://leetcode.com/problems/maximize-greatness-of-an-array/

class Solution {
public:
    int maximizeGreatness(vector<int>& nums) {
        
        int n = nums.size();        
        sort(nums.begin(),nums.end());
        int ans = 0;
        
        int a=0, b=1;
        while(b<n ){
            if(nums[a]<nums[b]){
                ans++;
                a++;
                b++;
            }
            else
                b++;
        }
        
        return ans;
    }
};
