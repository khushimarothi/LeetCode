//https://leetcode.com/problems/happy-number/

class Solution {
    int squaresum(int n){
        int rev=0,a;
         while(n){
              a=n%10;
             rev=a*a+rev;
            n=n/10;
            
             
            }
        return rev;
    }
public:
    bool isHappy(int n) {
        int slow,fast;
        slow=fast=n;
        do{
            slow=squaresum(slow);
            fast=squaresum(squaresum(fast));
            
        }while(slow!=fast);
        return (slow==1);
    
     
    }
};
