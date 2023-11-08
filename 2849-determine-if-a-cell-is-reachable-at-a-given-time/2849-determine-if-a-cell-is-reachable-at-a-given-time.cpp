class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        
        int a = abs(sx - fx);
        int b = abs(sy - fy);
    
        
        int i = max(a, b);
        
        if(i > t || (i == 0 && (t < 2 && t > 0)))
            return false;
        
        return true;
    }
};