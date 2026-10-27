// Last updated: 10/27/2026, 8:43:58 PM
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
    int goodNodes(TreeNode* root) {
        int currMaxv=root->val;
        int ans=0;
        dfs(root,currMaxv,ans);
        return ans;
    }
    void dfs(TreeNode* root,int currMaxv,int &ans){
        if(root==nullptr)return;
        if(root->val>=currMaxv){
            currMaxv=root->val;
            ans++;
        }
        dfs(root->left,currMaxv,ans);
        dfs(root->right,currMaxv,ans);
        return;
    }
};