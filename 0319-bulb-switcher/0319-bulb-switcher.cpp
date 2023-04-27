class Solution {
public:
    int bulbSwitch(int n) {
        int ans=0;
        for(int i=1;i<=n;i++){
            int x= sqrt(i);
            if(x*x == i){
                ans++;
            }
        }
        return ans;
    }
};