// Last updated: 10/12/2026, 7:23:58 PM
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
    int countNodes(TreeNode* root) {
        if(root==nullptr)return 0;
        int lh=heightL(root);
        int rh=heightR(root);
        if(lh==rh)return (1<<lh)-1;
        return 1+countNodes(root->left)+countNodes(root->right);
    }
    int heightL(TreeNode* root){
        int hgt=0;
        while(root){
            hgt++;
            root=root->left;
        }
        return hgt;
    }
    int heightR(TreeNode* root){
        int hgt=0;
        while(root){
            hgt++;
            root=root->right;
        }
        return hgt;
    }
};