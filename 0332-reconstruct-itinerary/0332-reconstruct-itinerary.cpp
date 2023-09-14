class Solution {
public:
    vector<string> findItinerary(vector<vector<string>>& tickets) {
        unordered_map<string, multiset<string>> adj;
        int n = tickets.size();
        vector<string> ans;
        
        for(int i = 0; i < n; i++){
            adj[tickets[i][0]].insert(tickets[i][1]); 
        }
        
        stack<string> st;
        st.push("JFK");
        while(!st.empty()){
            string v = st.top();
            if(adj[v].size()==0){
                ans.push_back(v);
                st.pop();
            }
            else{
                auto dst = adj[v].begin();
                st.push(*dst);
                adj[v].erase(dst);
            }
        }
        reverse(ans.begin(), ans.end());
        
        return ans;
    }
};