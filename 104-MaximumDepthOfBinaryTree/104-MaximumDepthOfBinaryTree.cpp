// Last updated: 10/27/2026, 8:47:23 PM
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
    int maxDepth(TreeNode* root) {
        if(root==nullptr)return 0;
        return solve(root);
    }
    int solve(TreeNode* root){
        if(root==nullptr)return 0;
        int l=solve(root->left);
        int r=solve(root->right);
        return 1+max(l,r);
    }
};