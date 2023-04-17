class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n= candies.size();
        
        vector<bool> res;
        
       int candy =0;
        for(int i=0;i<n;i++){
            candy=max(candy,candies[i]);
        }
        
        for(int i=0;i<n;i++){
            res.push_back(candies[i]+ extraCandies>=candy);
        }
        return res;
    }
};