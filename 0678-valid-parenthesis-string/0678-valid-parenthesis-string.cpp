class Solution {
public:
    bool checkValidString(string s) {
        
      int hi = 0, lo = 0;
        
      for(char it: s){
          
          if(it == '('){
              hi++;
              lo++;
          }
          else if(it == ')'){
              lo = max(0, --lo);
              hi--;
          }
          else if(it == '*'){
              lo = max(0, --lo);
              hi++;
          }
          if(hi < 0){
              return false;
          }
      }
        
        return lo == 0;
    }
};