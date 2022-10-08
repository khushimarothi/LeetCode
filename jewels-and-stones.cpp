//https://leetcode.com/problems/jewels-and-stones/

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int ans=0;
        int m=jewels.length();
        int n=stones.length();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(stones[i]==jewels[j]){
                    ans++;
                }
            }
        }
        return ans;
    }
};
