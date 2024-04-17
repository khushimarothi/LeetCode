/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
     void dfs(TreeNode* node, string cur, string& minStr) {
        if (node == nullptr) return;
        
        cur = char('a' + node->val) + cur;
        
        if (node->left == nullptr && node->right == nullptr) {
            if (minStr.empty() || cur < minStr) {
                minStr = cur;
            }
        }
        
        dfs(node->left, cur, minStr);
        dfs(node->right, cur, minStr);
    }
    
    string smallestFromLeaf(TreeNode* root) {
        string minStr = "";
        dfs(root, "", minStr);
        return minStr;
    }
};