// Last updated: 10/12/2026, 7:24:43 PM
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
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==nullptr)return false;
        int curr=0;
        return dfs(root,targetSum,curr);
    }
    bool dfs(TreeNode* root,int targetSum,int curr){
        if(root==nullptr)return false;
        curr+=root->val;
        if(root->left==nullptr&&root->right==nullptr)return curr==targetSum;
        if(dfs(root->left,targetSum,curr))return true;
        if(dfs(root->right,targetSum,curr))return true;
        return false;
    }
};