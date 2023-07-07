class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        
        int n = answerKey.size();
        
        int ans = 0;
        int t = 0, f = 0, i = 0;
        
        for(int j = 0; j < n; j++){
            if(answerKey[j] == 'T'){
                t++;
            }
            else{
                f++;
            }
            
            if(min(t,f) > k){
                if(answerKey[i] == 'T')
                    t--;
                else{
                    f--;
                }
                
                i++;
            }
            ans = max(ans, t + f);
        }
        return ans;
    }
};