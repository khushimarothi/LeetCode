class Solution {
public:
    int findMinimumOperations(string s1, string s2, string s3) {
        
        if(s1[0] != s2[0] || s2[0] != s3[0])
            return -1;
        
        int a = s1.length();
        int b = s2.length();
        int c = s3.length();

        int mini  = min(a,min(b,c));
        for(int i = 0;i < mini ;i++){
            if(s1[i] != s2[i] || s2[i] != s3[i])
                return a + b + c - 3*i;
        }
        return a + b + c - 3*mini;
    }
};