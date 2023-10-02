class Solution {
public:
    bool winnerOfGame(string colors) {
        
        int n = colors.size();
        
        int i = 1, j = 0, k = 0;
        while(i < n-1){
            
            if(colors[i - 1] == colors[i] && colors[i] == colors[i +1]){
                if(colors[i] == 'A'){
                    j++;
                }
                else{
                    k++;
                }
            }
            i++;
        }
        
        if(j - k >= 1){
            return true;
        }
        
        return false;
    }
};