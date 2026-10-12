// Last updated: 10/12/2026, 7:24:36 PM
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
    int maxPathSum(TreeNode* root) {
        int maxv=INT_MIN;
        solve(root,maxv);
        return maxv;
    }
    int solve(TreeNode* root,int &maxv){
        if(root==nullptr)return 0;
        int l=solve(root->left,maxv);
        int r=solve(root->right,maxv);
        l=max(0,l);
        r=max(0,r);
        maxv=max(maxv,l+r+root->val);
        return root->val+max(l,r);
    }
};