// Last updated: 8/2/2026, 1:00:52 AM
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
        int sum=0;
        tree(root,low,high,sum);
        return sum;
    }
    void tree(TreeNode *root, int low, int high,int &sum){
        if(root==NULL)return;
        if(root->val>=low&&root->val<=high)sum+=root->val;
        tree(root->left,low,high,sum);
        tree(root->right,low,high,sum);
    }
};