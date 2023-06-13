class Solution {
public:
    long long minCost(vector<int>& nums, int x) {
     
        int n = nums.size();
        long long ans = LONG_MAX;
        
        vector<int> c(n, INT_MAX);
        
        for(int i = 0; i <= n - 1;i++){
            long long res = (long long)i * x;
            
            for(int j = 0; j < n; j++){
                c[j] = min(c[j], nums[(j + i) % n]);
                res += c[j];
            }
            
            ans = min(ans, res);
        }
        return ans;
    }
};