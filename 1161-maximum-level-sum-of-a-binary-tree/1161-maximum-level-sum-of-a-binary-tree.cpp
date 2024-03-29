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
    int maxLevelSum(TreeNode* root) {
        if(!root) return 0;
        
        int maxsum = root->val;
        int maxlevel = 1;
        int level = 1;
        
        queue<TreeNode *> q;
        q.push(root);
        
        while(!q.empty()){
            int n = q.size();
            int curr = 0; 
            
            for(int i = 0; i < n;i++){
                TreeNode *node = q.front();
                q.pop();
                curr += node->val;
                
                if(node->left) q.push(node->left);
                
                if(node->right) q.push(node->right);
            }
            
            if(curr > maxsum){
                maxsum = curr;
                maxlevel = level;
            }
            level++;
        }
        return maxlevel;
    }
};