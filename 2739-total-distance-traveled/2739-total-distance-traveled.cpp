class Solution {
public:
    int distanceTraveled(int mainTank, int additionalTank) {
        int dis = 0;
        
        while(true){
            if(mainTank >= 5){
                mainTank-=5;
                dis += 50;
                
                if(additionalTank > 0){
                    mainTank++;
                    additionalTank--;
                }
            }
            else{
                    break;
                }
        }
        
        int n = mainTank * 10;
        return dis + n;
    }
};