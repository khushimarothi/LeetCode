class Solution {
public:
    int maxVowels(string s, int k) {
        int n= s.size();
        int cnt =0, ans=0;
        
        for(int i=0;i<n;i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
                cnt++;
            }
            if(i-k>=0){
                if(s[i-k]=='a' || s[i-k]=='e' || s[i-k]=='i' || s[i-k]=='o' || s[i-k]=='u'){
                    cnt--;
                }
            }
            
            if(cnt>ans){
                ans=cnt;
            }
        }
        return ans;
    }
};