class Solution {
    
public:
    int find(vector<int>& nums,int low,int high){
          if(high<low) return nums[0];
        
        if(high==low) return nums[low];
        
        int mid=low+(high-low)/2;
        
        if(mid<high && nums[mid+1]<nums[mid])return nums[mid+1];
        
        if(mid>low && nums[mid]<nums[mid-1]) return nums[mid];
        
        if(nums[high]>nums[mid]){ return find(nums, low,mid-1);}
        
        return find(nums,mid+1,high);
    }
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int low=0,  high=n-1;
       return find(nums,low,high);
      
    }
};