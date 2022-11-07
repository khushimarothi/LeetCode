class Solution {
public:
    int maximum69Number (int num) {
        int numcopy=num;
        int inFirst6=-1;
        int curdig =0;
        while(numcopy>0){
            if(numcopy%10 == 6){
                inFirst6= curdig;
                
            }
              numcopy/=10;
                curdig++;
            
        }
        return inFirst6 == -1? num:num+3*(int)pow(10,inFirst6);
    }
};