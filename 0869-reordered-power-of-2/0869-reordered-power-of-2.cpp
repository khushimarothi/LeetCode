class Solution {
public:
    int count(int n){
        long r=0;
        while(n){
            r+=pow(10,n%10);
            n/=10;
        }
        return r;
    }
    bool reorderedPowerOf2(int n) {
       long x=count(n);
        for(int i=0;i<32;i++){
            if(count(1<<i)==x) return true;
        }
        return false;
    }
};