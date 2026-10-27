// Last updated: 10/27/2026, 8:47:29 PM
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
    bool isSymmetric(TreeNode* root) {
        if(root->left==nullptr&&root->right==nullptr)return true;
        TreeNode* l=root->left;
        TreeNode* r=root->right;
        return dfs(l,r);
    }
    bool dfs(TreeNode* l,TreeNode* r){
        if((l!=nullptr&&r==nullptr)||(l==nullptr&&r!=nullptr))return false;
        if(l==nullptr&&r==nullptr)return true;
        if(l->val!=r->val)return false;
        if(dfs(l->left,r->right)==false)return false;
        if(dfs(l->right,r->left)==false)return false;
        return true;
    }
};