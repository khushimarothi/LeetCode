class Solution {
public:
    long long minimumCost(string s) {
        
        int n = s.size();
   
        long long cnt = 0;
    
    
        for(int i=0;i<n-1;i++) {
        
            if(s[i+1] != s[i])
             cnt +=min(i+1,n-i-1);
    }
    
    return cnt;
    }
};