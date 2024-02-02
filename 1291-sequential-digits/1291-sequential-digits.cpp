class Solution {
public:
    void solve(int i, int low, int high, vector<int> &res){
        if(i > high){
            return ;
        }
        
        if(i >=low && i<=high){
            res.push_back(i);
        }
        
        int lastnum = i % 10;
        if(lastnum < 9){
            solve(i*10 + lastnum + 1, low, high, res);
        }
    }
    
    vector<int> sequentialDigits(int low, int high) {
        vector<int> res;
        for(int i = 1; i<=9; i++){
            solve(i, low, high, res);
        }
        sort(res.begin(), res.end());
        
        return res;
    }
};