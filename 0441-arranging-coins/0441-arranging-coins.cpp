class Solution {
public:
    int arrangeCoins(int n) {
        int ans=(sqrt(8*(long long)n+1)-1)/2;
        return ans;
    }
};