// Last updated: 10/27/2026, 8:46:53 PM
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
    void flatten(TreeNode* root) {
        if(root==nullptr)return;
        vector<TreeNode*>preorder;
        dfs(root,preorder);
        root=preorder[0];
        for(int i=1;i<preorder.size();i++){
            root->left=nullptr;
            root->right=preorder[i];
            root=root->right;
        }
        root->left=nullptr;
        root->right=nullptr;
    }
    void dfs(TreeNode* root,vector<TreeNode*>&preorder){
        if(root==nullptr)return;
        preorder.push_back(root);
        dfs(root->left,preorder);
        dfs(root->right,preorder);
        return;
    }
};