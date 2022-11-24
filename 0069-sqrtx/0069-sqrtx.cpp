class Solution {
public:
    int mySqrt(int x) {
        
    if(x<=1)
        return x;
       
        int l=1,h=x/2,ans;
        long sqr;
        
        while(l<=h){
            int mid=l+(h-l)/2;
            sqr=(long)mid*(long)mid;
            if(sqr==x) return mid;
            
            if(sqr<=x){
                l=mid+1;
                ans=mid;
            }
            else{
                h=mid-1;
            }
        }
        return floor(ans);
    }
};