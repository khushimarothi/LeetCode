class Solution {
    bool check(int m, vector<int>& nums, int maxOperations){
        for(int i=0;i<nums.size();i++){
            maxOperations-=(nums[i]/m);
            if(nums[i]%m==0) maxOperations++;
        }
        return maxOperations>=0;
    }
public:
    int minimumSize(vector<int>& nums, int maxOperations) {
       int l=1,h=INT_MAX,ans=0;
        while(l<=h){
            int m=l+(h-l)/2;
            if(check(m,nums,maxOperations)){
                ans=m;
                h=m-1;
            }
            else{
                l=m+1;
            }
        }
        return ans;
    }
};