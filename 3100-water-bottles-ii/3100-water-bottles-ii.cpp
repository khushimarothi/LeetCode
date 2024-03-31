class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
     
        int ans = 0;
        ans = numBottles;
        int emp = numBottles;
        numBottles = 0;
        while(true) {
            int cur = 0;
            if (emp < numExchange) {
                break;
            }
            
            while(emp >= numExchange) {
               emp -= numExchange;
               numExchange++; 
                cur++;
            }
            ans += cur;
            emp += cur;
            
        }
        
        return ans;


    }
};