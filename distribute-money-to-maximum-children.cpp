//https://leetcode.com/problems/distribute-money-to-maximum-children/

class Solution {
public:
    int distMoney(int money, int children) {
         
        if(money<children){
            return -1;
        }
        
        if(money<8) return 0;
        int max_eight = money/8, noTime= money%8 ;
        
        if(max_eight == children && noTime == 0) 
            return children;
        
        if(max_eight>=children )
            return children-1;
        
        if(noTime==4 && (children-max_eight)==1)
            return children-2;
        
        if(noTime>=(children-max_eight))
            return max_eight;
        
        int remain = children-max_eight;
        while(noTime<remain){
            remain++;
            noTime+=8;
            max_eight--;
        }
        return max_eight;
    }
};
