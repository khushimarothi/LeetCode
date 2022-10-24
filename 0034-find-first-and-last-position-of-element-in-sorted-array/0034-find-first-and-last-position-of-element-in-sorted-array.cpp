class Solution {
    int first(vector<int>& nums, int target){
        int k=-1;
        int lo=0,hi=nums.size()-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(nums[mid]<target){
                lo=mid+1;       
            }
            else if(nums[mid]>target){
                hi=mid-1;
            }
            else{
                k=mid;
                hi=mid-1;
            }
        }
        return k;
    }
    int last(vector<int>& nums, int target){
        int k=-1;
        int lo=0,hi=nums.size()-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(nums[mid]<target){
                lo=mid+1;       
            }
            else if(nums[mid]>target){
                hi=mid-1;
            }
            else{
                k=mid;
                lo=mid+1;
            }
        }
        return k;
    }
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans(2);
        ans[0]=first(nums,target);
        ans[1]=last(nums,target);
        return ans;
    }
};