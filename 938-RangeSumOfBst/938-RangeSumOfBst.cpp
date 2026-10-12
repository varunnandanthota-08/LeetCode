// Last updated: 10/12/2026, 7:21:54 PM
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
    int rangeSumBST(TreeNode* root, int low, int high) {
        if(root==nullptr)return 0;
        int ans=0;
        solve(root,low,high,ans);
        return ans;
    }
    void solve(TreeNode* root,int low,int high,int &ans){
        if(root==nullptr)return ;
        int val=root->val;
        if(val>=low && val<=high)ans+=val;
        solve(root->left,low,high,ans);
        solve(root->right,low,high,ans);
        return ;
    }
};