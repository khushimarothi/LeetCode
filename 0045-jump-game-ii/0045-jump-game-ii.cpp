class Solution {
public:
    int jump(vector<int>& nums) {
        int n= nums.size();
        
        int s=1,id=0,cnt=1;
        
        if(n==1) return 0;
        
        while(1){
            if(id+nums[id]>=(n-1))
                return cnt;
            
            int maxi=0, i=0;
            while(s<=id+nums[id]){
                if(s+nums[s]>maxi)
                maxi=s+nums[s], i=s;
                s++;
            }
            s=nums[id]+id+1;
            id=i;
            cnt++;
        }
        return cnt;
    }
};