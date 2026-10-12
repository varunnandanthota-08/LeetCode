// Last updated: 10/12/2026, 7:21:35 PM
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
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int i=0;
        return solve(preorder,i,INT_MIN,INT_MAX);
    }
    TreeNode* solve(vector<int>&preorder,int &i,int low,int high){
        if(i==preorder.size())return nullptr;
        int val=preorder[i];
        if(val<low||val>high)return nullptr;
        TreeNode* root=new TreeNode(val);
        i++;
        root->left=solve(preorder,i,low,val);
        root->right=solve(preorder,i,val,high);
        return root;
    }
};