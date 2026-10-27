// Last updated: 10/27/2026, 8:44:40 PM
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
    int maxAncestorDiff(TreeNode* root) {
        int minv=root->val,maxv=root->val;
        int ans=0;
        dfs(root,minv,maxv,ans);
        return ans;
    }
    void dfs(TreeNode* root,int minv,int maxv,int &ans){
        if(root==nullptr)return;
        if(root->val<minv){
            minv=root->val;
        }
        if(root->val>maxv){
            maxv=root->val;
        }
        ans=max(ans,abs(minv-maxv));
        dfs(root->left,minv,maxv,ans);
        dfs(root->right,minv,maxv,ans);
        return;
    }
};