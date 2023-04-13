class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        
        stack<int> st;
        
        int i=0;
        
        for(auto it : pushed){
            st.push(it);
            while(st.size()>0 && st.top() == popped[i]){
                st.pop();
                i++;
            }
        }
        return st.size()==0;
        
    }
};