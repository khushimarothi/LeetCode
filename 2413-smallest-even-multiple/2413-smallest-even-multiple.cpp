class Solution {
public:
    int smallestEvenMultiple(int n) {
        if(n%2==0) return n;
        int k=n;
        while(1){
            if(k%n==0 && k%2==0) break;
            else k++;
        }
        return k;
    }
};