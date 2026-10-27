// Last updated: 10/27/2026, 8:47:14 PM
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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        map<int,int>mp;
        for(int i=0;i<inorder.size();i++){
            mp[inorder[i]]=i;
        }
        TreeNode* root=solve(postorder,0,postorder.size()-1,inorder,0,inorder.size()-1,mp);
        return root;
    }
    TreeNode* solve(vector<int>& postorder,int ps,int pe, vector<int>& inorder,int is,int ie,map<int,int>&mp){
        if(ps>pe||is>ie)return nullptr;
        TreeNode* root=new TreeNode(postorder[pe]);
        int idx=mp[root->val];
        int numsl=idx-is;
        root->left=solve(postorder,ps,ps+numsl-1,inorder,is,idx-1,mp);
        root->right=solve(postorder,ps+numsl,pe-1,inorder,idx+1,ie,mp);
        return root;
    }
};