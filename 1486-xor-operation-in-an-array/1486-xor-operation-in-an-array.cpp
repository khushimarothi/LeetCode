class Solution {
public:
    int xorOperation(int n, int start) {
        
        vector<int> v(n);
        
        for(int i = 0 ;i < n; i++){
            v[i] = start + 2 * i;
        }
        
        int res = v[0];
        
        for(int i = 1; i < n; i++){
            res = res ^ v[i];
        }
        return res;
    }
};