class Solution {
public:
    int findMaxK(vector<int>& nums) {
        int n=nums.size()-1;
        int k=0,res=-1;
        sort(nums.begin(),nums.end());
        while(k<n){
            int sum=nums[k]+nums[n];
            if(sum==0){
                res=max(res,max(nums[k],nums[n]));
                return res;
            }
            else if(sum<0){
                k++;
            }
            else{
                n--;
            }
        }
        return res;
    }
};