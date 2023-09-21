class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        
        stack<int> st;
        
        for(auto &it: asteroids){
           while(!st.empty() && it < 0 && st.top() > 0){
               int sum = it + st.top();
               
               if(sum < 0){
                   st.pop();
               }
               else if(sum > 0){
                   it = 0;
               }
               else{
                   st.pop();
                   it = 0;
               }
           }
            if(it != 0){
                st.push(it);
            }
        }
        
        int n = st.size();
        vector<int> ans(n);
        for(int i = n -1; i>=0; i--){
            ans[i] = st.top();
            st.pop();
        }
        
        return ans;
    }
};