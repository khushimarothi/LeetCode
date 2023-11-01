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
    unordered_map<int, int> mp;
    
    void inorder(TreeNode* root){
        if(root){
            inorder(root->left);
            mp[root->val]++;
            inorder(root->right);
        }
    }
    vector<int> findMode(TreeNode* root) {
        
        inorder(root);
        
        int maxi = -1;
        vector<int> ans;
        for(auto it : mp){
            if(it.second > maxi){
                maxi = it.second;
            }
        }
        
        for(auto it: mp){
            if(maxi == it.second){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};