class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        int res = 0;
    
    for (int i : left) {
        res = max(res, i);
    }
    
    for (int j : right) {
        res = max(res, n - j);
    }
    
    return res;
    }
};