// Last updated: 10/27/2026, 8:46:56 PM
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
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>>ans;
        int sum=0;
        vector<int>curr;
        dfs(root,ans,curr,sum,targetSum);
        return ans;
    }
    void dfs(TreeNode* root,vector<vector<int>>&ans,vector<int>&curr,int sum,int target){
        if(root==nullptr)return;
        sum+=root->val;
        curr.push_back(root->val);
        dfs(root->left,ans,curr,sum,target);
        if(root->left==nullptr&&root->right==nullptr){
            if(sum==target){
                    ans.push_back(curr);
            }
        }
        dfs(root->right,ans,curr,sum,target);
        curr.pop_back();
    }
};