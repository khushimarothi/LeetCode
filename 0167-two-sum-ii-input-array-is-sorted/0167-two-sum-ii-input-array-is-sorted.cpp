class Solution {
public:
    vector<int> twoSum(vector<int>& num, int target) {
        vector<int> res;
        int lo=0, hi=num.size()-1;
        
        while(lo<hi){
            int sum=num[lo]+num[hi];
        
                if(sum==target){
                    res.push_back(lo+1);
                    res.push_back(hi+1);
                    break;
                    
                }
            else if(sum<target) lo++;
            
            else if(sum>target) hi--;
            
            }
        return res;
    }
};