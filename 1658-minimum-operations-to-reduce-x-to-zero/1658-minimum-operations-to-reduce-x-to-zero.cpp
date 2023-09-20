class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        
        int sum = accumulate(nums.begin(), nums.end(), 0);
        
        int req = sum - x;
        
        int n = nums.size();
        
        if(req < 0){
            return -1;
        }
        if(req == 0){
            return n;
        }
        
        int cur = 0, cnt = INT_MAX;
        int left = 0, right = 0;
        
        while(right < n){
            cur += nums[right];
            right++;
            
            while(cur > req && left < n){
                cur -= nums[left];
                left++;
            }
            if(cur == req){
                cnt = min(cnt, n - (right - left));
            }
        }
        
        return (cnt == INT_MAX) ? -1 : cnt;
        
    }
};