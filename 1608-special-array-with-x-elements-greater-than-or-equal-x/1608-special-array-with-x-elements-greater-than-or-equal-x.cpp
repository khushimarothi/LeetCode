class Solution {
public:
    int specialArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> k(n+1,0);
        
        for(int i=0;i<n;i++){
            if(nums[i]>n) k[n]++;

            else k[nums[i]]++;
        }
        for(int i=n-1;i>=0;i--){
            k[i]+=k[i+1];
        }
        for(int i=0;i<=n;i++){
            if(k[i]==i) return i;
        }
        return -1;
    }
};