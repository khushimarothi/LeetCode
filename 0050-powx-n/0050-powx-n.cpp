class Solution {
public:
    double helper(double x, int n){
        if(n == 0)
            return 1;
        if(n == 1)
            return x;
        
        if(n%2 == 0){
            double a = helper(x, n/2);
            return a *a ;
        }
        
        else{
            double a = helper(x, n/2);
            return x*a*a;
        }
    }
    
    double myPow(double x, int n) {
       
        if(n < 0){
            n = abs(n);
            double ans = helper(x, n);
            return 1/ans;
        }
        double ans = helper(x, n);
        return ans;
    }
};