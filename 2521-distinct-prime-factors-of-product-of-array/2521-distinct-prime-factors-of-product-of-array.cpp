class Solution {
public:
    int distinctPrimeFactors(vector<int>& nums) {
        unordered_set<int> s;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int a=sqrt(nums[i]);
            
            for(int j=2;j<=a;j++){
                if(nums[i]%j==0) {
                    s.insert(j);
                    
                    while(nums[i]%j ==0){
                        nums[i]/=j;
                    }
            }
            }
            if(nums[i]>1) s.insert(nums[i]);
        }
        int b=s.size();
        return b;
    }
    
};