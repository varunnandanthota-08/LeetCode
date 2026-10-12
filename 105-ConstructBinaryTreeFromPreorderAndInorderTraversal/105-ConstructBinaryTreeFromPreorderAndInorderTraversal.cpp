// Last updated: 10/12/2026, 7:25:14 PM
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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        map<int,int>mp;
        for(int i=0;i<inorder.size();i++){
            mp[inorder[i]]=i;
        }
        TreeNode* root=solve(preorder,0,preorder.size()-1,inorder,0,inorder.size()-1,mp);
        return root;
    }
    TreeNode* solve(vector<int>& preorder,int ps,int pe, vector<int>& inorder,int is,int ie,map<int,int>&mp){
        if(ps>pe||is>ie)return nullptr;
        TreeNode* root=new TreeNode(preorder[ps]);
        int idx=mp[root->val];
        int numsl=idx-is;
        root->left=solve(preorder,ps+1,ps+numsl,inorder,is,idx-1,mp);
        root->right=solve(preorder,ps+numsl+1,pe,inorder,idx+1,ie,mp);
        return root;
    }
};