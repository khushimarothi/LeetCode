class Solution {
public:
    bool isPalindrome(int x) {
        int temp=x;
         long int rev=0;
        while(x>0){
            int rem=x%10;
            rev=rev*10+rem;
            x/=10;
            
        }
        if(rev== temp){
            return true;
        }
        else if(temp != rev){
            return false;
        }
        return false;
    }
};