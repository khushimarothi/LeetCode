class Solution {
public:
    bool judgeSquareSum(int c) {
        long a;
        for(a=0;a*a<=c;a++){
          double x=sqrt(c-(a*a));
            if(x==(int)x){
                return true;
            }
        }
        return false;
    }
};