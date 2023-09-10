class Solution {
public:
    int mod = 1e9 + 7;
    
    int countOrders(int n) {
        
        long com = 2 * n;
        long seq = 1;
        
        for(int i = n; i >= 1; i--){
            seq = (seq*((com * (com - 1)))/2) % mod;
            com = com - 2;
        }
        return (int)seq;
    }
};