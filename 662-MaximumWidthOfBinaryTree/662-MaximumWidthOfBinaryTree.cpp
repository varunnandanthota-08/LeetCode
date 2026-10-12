// Last updated: 10/12/2026, 7:23:05 PM
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     long long val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(long long x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(long long x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        queue<pair<TreeNode*,long long>>q;
        q.push({root,0});
        long long ans=0;
        while(!q.empty()){
            long long size=q.size();
            long long minv=q.front().second;
            long long first,last;
            for(long long i=0;i<size;i++){
                long long currId=q.front().second-minv;
                TreeNode* curr=q.front().first;
                q.pop();
                if(i==0)first=currId;
                if(i==size-1)last=currId;
                if(curr->left){
                    q.push({curr->left,2*currId+1});
                }
                if(curr->right){
                    q.push({curr->right,2*currId+2});
                }
            }
            ans=max(ans,last-first+1);
        }
        return ans;
    }
};