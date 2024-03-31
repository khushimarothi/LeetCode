class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        
        int total = numBottles;
        
        while(numBottles >= numExchange){
            int rem = numBottles % numExchange;
            numBottles = numBottles/numExchange;
            total += numBottles;
            numBottles += rem;
        }
        return total;
    }
};