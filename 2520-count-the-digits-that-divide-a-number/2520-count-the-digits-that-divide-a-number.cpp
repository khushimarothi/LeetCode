class Solution {
public:
    int countDigits(int num) {
      int cnt=0, temp=num,rev=0;
        while(temp!=0){
            rev =temp%10;
            if(num%rev==0) cnt++;
            
            temp=temp/10;
        }
        return cnt;
    }
};