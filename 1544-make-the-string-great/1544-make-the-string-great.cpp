class Solution {
public:
    string makeGood(string s) {
        
        stack<char> st;
        
        for(char it: s){
            if(!st.empty() && abs(st.top() - it) == 32){
                st.pop();
            }
            else{
                st.push(it);
            }
        }
        
        string res = "";
        while(!st.empty()){
            res = st.top() + res;
            st.pop();
        }
        
        return res;
    }
};