//https://leetcode.com/problems/find-greatest-common-divisor-of-array/

class Solution {
public:
    int findGCD(vector<int>& nums) {
        int n2= *max_element(nums.begin(),nums.end());
        int n1=*min_element(nums.begin(),nums.end());
        int hcf;
       
  for (int i = 1; i <=  n2; ++i) {
    if (n1 % i == 0 && n2 % i ==0) {
      hcf = i;
    }
  }
return hcf;
    }
};
