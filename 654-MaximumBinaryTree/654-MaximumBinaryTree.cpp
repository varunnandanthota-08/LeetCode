// Last updated: 10/27/2026, 8:45:17 PM
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
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        int n=nums.size();
        return dfs(nums,0,n-1);
    }
    TreeNode* dfs(vector<int>&nums,int l,int r){
        if(l>r)return nullptr;
        int maxv=-1;
        int idx=-1;
        for(int i=l;i<=r;i++){
            if(nums[i]>maxv){
                maxv=nums[i];
                idx=i;
            }
        }
        TreeNode* root=new TreeNode(maxv);
        root->left=dfs(nums,l,idx-1);
        root->right=dfs(nums,idx+1,r);
        return root;
    }
};