class Solution {
public:
    vector<int> getRow(int row) {
        
        vector<int> ans(1,1);
        
        long long n = 1;
        
        for(int i = 1; i <= row;i++){
            long long val = n *(row - i+1)/i;
            ans.push_back(val);
            n = val;
        }
        
        return ans;
    }
};