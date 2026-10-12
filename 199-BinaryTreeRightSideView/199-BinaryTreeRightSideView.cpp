// Last updated: 10/12/2026, 7:24:09 PM
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
    vector<int> rightSideView(TreeNode* root) {
        vector<int>ans;
        int l=0;
        solve(root,l,ans);
        return ans;
    }
    void solve(TreeNode* root,int l,vector<int>&ans){
        if(root==nullptr)return;
        if(l==ans.size())ans.push_back(root->val);
        solve(root->right,l+1,ans);
        solve(root->left,l+1,ans);
    }
};