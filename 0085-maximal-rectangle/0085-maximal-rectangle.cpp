class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        
     int n = matrix.size();
     int m = matrix[0].size();
        
     if(matrix.empty() || matrix[0].empty())
         return 0;
    
     vector<int> v(m, 0);
     int maxi = 0;

     for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            if(matrix[i][j] == '1') {
                v[j]++;
            } 
            else{
                v[j] = 0;
            }
         }
        
      stack<int> st;
         
      for(int j = 0; j <= m; ++j) {
        while(!st.empty() && (j == m || v[j] < v[st.top()])) {
                int height = v[st.top()];
                st.pop();
                int width = st.empty() ? j : j - st.top() - 1;
                maxi= max(maxi, height * width);
            }
            st.push(j);
        }
    }

    return maxi;
    }
};