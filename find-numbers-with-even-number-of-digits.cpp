//https://leetcode.com/problems/find-numbers-with-even-number-of-digits/

class Solution {
    int check(int n){
       int count=0;     
            while(n>0){
                n/=10;
                count++;
            } 
        return count;
    }
public:
    int findNumbers(vector<int>& nums) {
        int n=nums.size();
       int ans=0;
        for(int i=0;i<n;i++){
            if(check(nums[i])%2==0)
               ans++;
        }
          
        return ans;
    }
};
