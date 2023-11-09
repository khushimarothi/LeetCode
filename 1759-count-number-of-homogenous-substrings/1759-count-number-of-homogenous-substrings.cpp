class Solution {
public:
    int countHomogenous(string s) {
        
       int n = s.size();
       int sum = 1;
       
       long long ans = 0;
        
       for(int i = 1;i < n; i++){
          if(s[i] == s[i-1]){
              sum++; 
              ans += sum;
          }
          
          else{
              sum = 1;
              ans += sum;
          }
       } 
    return (ans+1)%1000000007;
    }
};