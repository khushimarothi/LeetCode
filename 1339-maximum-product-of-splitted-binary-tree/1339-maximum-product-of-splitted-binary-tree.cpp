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
    long long dfs(TreeNode *root,long long sum, long long&ans){
        if(!root) return 0;
        long long curr=dfs(root->left,sum,ans)+dfs(root->right,sum,ans)+root->val;
        ans=max(ans,(sum-curr)*curr);
        return curr;
    }
    int maxProduct(TreeNode* root) {
        long long ans=0;
        long long sum=dfs(root,0,ans);
        sum=dfs(root,sum,ans);
        ans%=1000000007;
        return (int)ans;
    }
};