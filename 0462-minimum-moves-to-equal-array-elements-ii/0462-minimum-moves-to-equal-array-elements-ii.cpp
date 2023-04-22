class Solution {
public:
    int minMoves2(vector<int>& nums) {
      sort(nums.begin(),nums.end());
      int n= nums.size();
      int l=0, h=n-1;
    
        int ans=0;
        while( l<h)
        {
            ans+=abs(nums[h]-nums[l]);
            l++;
            h--;
        }
        return ans;
    }
};