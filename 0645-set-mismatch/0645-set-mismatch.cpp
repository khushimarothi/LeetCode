class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        
        int n = nums.size();
        unordered_set<int> s;
    
        int sum = 0;
        int dup = -1;
    
        for(int num : nums) {
        
            sum += num;
        
            if(s.find(num) != s.end()) {
               dup = num;
            } 
            
            else{
               s.insert(num);
            }
         }
    
    
        int ex = n * (n + 1) / 2;
        int mis = ex - (sum - dup);

     return {dup, mis};
    }
};