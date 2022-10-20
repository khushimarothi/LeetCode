class Solution {
public:
    int maxIceCream(vector<int>& cost, int coins) {
        sort(cost.begin(),cost.end());
        int count =0,i=0;
        int n=cost.size();
        while(i<n && coins>0){
            if(coins>=cost[i]){
                count++;
                coins-=cost[i];
                i++;
            }
            else
                break;
        }
        return count;
    }
};