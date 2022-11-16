class Solution {
public:
    long long makeSimilar(vector<int>& nums, vector<int>& target) {
        sort (nums.begin(),nums.end());
        sort(target.begin(),target.end());
        
        vector<int> odd, oddtarget;
        vector<int> even,eventarget;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                even.push_back(nums[i]);
            }
            else{
                odd.push_back(nums[i]);
            }
            if(target[i]%2==0){
                eventarget.push_back(target[i]);
            }
            else{
                oddtarget.push_back(target[i]);
            }
        }
        long long int op=0;
        
        for(int i=0;i<even.size();i++){
           op+=abs((long long)even[i]-(long long)eventarget[i])/2;
        }
         for(int i=0;i<odd.size();i++){
           op+=abs((long long)odd[i]-(long long)oddtarget[i])/2;
        }
        
        return op/2;
    }
};