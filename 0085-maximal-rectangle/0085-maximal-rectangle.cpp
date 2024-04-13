class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
         if (matrix.empty() || matrix[0].empty()) return 0;

    int rows = matrix.size();
    int cols = matrix[0].size();

    std::vector<int> heights(cols, 0);
    int maxArea = 0;

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (matrix[i][j] == '1') {
                heights[j]++;
            } else {
                heights[j] = 0;
            }
        }
        
        std::stack<int> stk;
        for (int j = 0; j <= cols; ++j) {
            while (!stk.empty() && (j == cols || heights[j] < heights[stk.top()])) {
                int height = heights[stk.top()];
                stk.pop();
                int width = stk.empty() ? j : j - stk.top() - 1;
                maxArea = std::max(maxArea, height * width);
            }
            stk.push(j);
        }
    }

    return maxArea;
    }
};