class Solution {
public:
    int binaryGap(int n) {
        
        int h = -1;
        int res = 0, ind = 0;
        while(n){
            int bit = n & 1;
            if(bit){
                if(h != -1)
                    res = max(res, ind - h);
                h = ind;
            }
            ind++;
            n >>= 1;
            
            
        }
        return res;
        
    }
};