class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        int ans = 0;
        for(auto it: tokens){
            
            if((!st.empty()) && ( it == "+" || it == "-" || it == "*" || it == "/")){
                int nums2 = st.top();
                st.pop();
                int nums1 = st.top();
                st.pop();
                
                if(it == "+"){
                    ans = nums1 + nums2;
                }
                else if(it == "-"){
                    ans = nums1 - nums2;
                }
                else if(it == "*"){
                    ans = nums1 * nums2;
                }
                else{
                    ans = nums1/nums2;
                }
                st.push(ans);
            }
            else st.push(stoi(it));
        }
        ans = st.top();
        
        return ans;
    }
};