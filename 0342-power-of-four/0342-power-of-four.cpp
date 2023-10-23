class Solution {
public:
    bool isPowerOfFour(int n) {
        
        if(n < 1) return false;
        int x = n, cnt = 0;
        while(x > 1){
            x >>= 2;
            cnt += 2;
        }
        return (x << cnt) == n;
    }
};