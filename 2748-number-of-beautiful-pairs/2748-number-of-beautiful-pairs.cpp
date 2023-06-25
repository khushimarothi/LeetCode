class Solution {
public:
    int firstDigit(int n){
    
        while (n >= 10)
           n /= 10;
    
       return n;
     }
    int lastDigit(int n){
      
       return (n % 10);
    }
    
    int countBeautifulPairs(vector<int>& nums) {
        
        int ans = 0;
        int n = nums.size();
        
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j<n; j++){
                int l = lastDigit(nums[j]), f = firstDigit(nums[i]);
                if(__gcd(l,f) == 1) ans++;
            }
        }
        return ans;
    }
};