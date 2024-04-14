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
    int helper(TreeNode* root, bool isleft){
        if(!root) return 0;
        if(!root->left && !root->right && isleft){
            return root->val;
        }
        
        return helper(root->left, true) + helper(root->right, false);
    }
    
    int sumOfLeftLeaves(TreeNode* root) {
        return helper(root, false);
    }
};