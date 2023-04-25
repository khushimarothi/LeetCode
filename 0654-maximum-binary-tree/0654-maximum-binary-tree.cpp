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
    TreeNode* construct(vector<int>& num, int s, int e){
        if(s> e) return NULL;
        if(s==e) return new TreeNode(num[s]);
        
        int in= maxi(num,s,e);
        TreeNode* root = new TreeNode(num[in]);
        root->left = construct(num,s,in-1);
        root->right = construct(num,in+1,e);
        
        return root;
        
    }
    
    int maxi(vector<int>& num, int s, int e){
        int max=INT_MIN;
        int in=-1;
        for(int i=s;i<=e;i++){
            if(num[i]>max){
                max=num[i];
                in=i;
            }
        }
        return in;
    }
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        TreeNode* root = construct(nums, 0, nums.size()-1);
        return root;
    }
};