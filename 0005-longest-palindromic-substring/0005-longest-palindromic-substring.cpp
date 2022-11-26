class Solution {
public:
  void  expand(string s,int l, int r, int&left, int &right){
      while(l>=0 && r<s.size() && s[l]==s[r]){
          l--; r++;
      }
      l++;r--;
      
      if(r-l+1> right-left+1){
          left=l;
          right=r;
      }
  }
    string longestPalindrome(string s) {
      int left=0,right=0;
        for(int i=0;i<=s.size();i++){
            expand(s,i,i,left,right);
            
             expand(s,i,i+1,left,right);
        }
        
        return s.substr(left,right-left+1);
    }
};