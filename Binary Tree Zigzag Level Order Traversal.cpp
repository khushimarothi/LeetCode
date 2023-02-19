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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
     
        vector<vector<int>> ans;
        
        queue<TreeNode*> q;
        if(root== NULL) return ans;
        q.push(root);
        int f=0;
        while(q.size()){
            vector<int> temp;
            
            int s=q.size();
            
            while(s--){
                TreeNode* t=q.front();
                q.pop();
                
                if(t->left!=NULL){
                    q.push(t->left);
                }
                if(t->right!=NULL){
                    q.push(t->right);
                }
                temp.push_back(t->val);
            }
            if(f==0){
                f=1;
                ans.push_back(temp);
            }
            else{
                reverse(temp.begin(),temp.end());
                ans.push_back(temp);
                f=0;
            }
        }
        
        return ans;
        
    }
};
