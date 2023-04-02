class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(),potions.end());
        
        int n =potions.size();
        vector<int>ans;
        
        for(long long i: spells){
            int l=0, h=n-1;
            int cnt=0;
            while(l<=h){
                int mid=l+(h-l)/2;
                if(i*potions[mid]>=success){
                    cnt+=h-mid+1;
                    h=mid-1;
                   
                }
                else if(i*potions[mid]<success){
                     l=mid+1;
                }
            }
            ans.push_back(cnt);
        }
        return ans;
    }
};