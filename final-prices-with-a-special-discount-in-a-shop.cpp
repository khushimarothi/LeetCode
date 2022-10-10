//https://leetcode.com/problems/final-prices-with-a-special-discount-in-a-shop/

class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        stack<int> st;
        st.push(0);
        for(int i=1;i<prices.size();i++){
            while(!st.empty() && prices[st.top()]>=prices[i]){
                prices[st.top()]-=prices[i],st.pop();
            }
            st.push(i);
        }
        return prices;
    }
};
