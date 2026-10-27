// Last updated: 10/27/2026, 8:42:51 PM
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
    int averageOfSubtree(TreeNode* root) {
        int ans=0;
        int cnt=0;
        int sum=0;
        dfs(root,sum,cnt,ans);
        return ans;  
    }
    pair<int,int> dfs(TreeNode* root,int &sum,int &cnt,int &ans){
        if(root==nullptr)return {0,0};
        pair<int,int>l=dfs(root->left,sum,cnt,ans);
        pair<int,int>r=dfs(root->right,sum,cnt,ans);
        int curr=root->val;
        cnt=l.second+r.second+1;
        sum=l.first+r.first+curr;
        int avg=sum/cnt;
        if(curr==avg){
            ans++;
        }
        return {sum,cnt};
    }
};