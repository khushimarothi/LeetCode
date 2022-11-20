class Solution {
public:
    bool isArithmetic( vector<int>& v){
        int n=v.size();
        if(n==2)
            return true;
        int d=v[1]-v[0];
        for(int i=2;i<n;i++){
            if(v[i]-v[i-1]!=d){
                return false;
            }
        }
        return true;
    }
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        int n=l.size();
        vector<bool> ans;
        for(int i=0;i<n;i++){
            int x=l[i];
            int y=r[i];
            vector<int> v;
            for(int j=x;j<=y;j++){
                v.push_back(nums[j]);
            }
            sort(v.begin(),v.end());
            if(isArithmetic(v)){
                ans.push_back(true);
                
            }
            else{
                 ans.push_back(false);
            }
        }
        return ans;
    }
};