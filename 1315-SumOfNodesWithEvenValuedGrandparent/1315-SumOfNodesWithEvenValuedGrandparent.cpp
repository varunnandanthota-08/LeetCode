// Last updated: 10/12/2026, 7:21:02 PM
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
    int sumEvenGrandparent(TreeNode* root) {
        map<TreeNode*,TreeNode*>gp,p;
        solve(root,gp,p);
        int ans=0;
        for(auto &it:gp){
            if(it.second->val%2==0)ans+=it.first->val;
        }
        return ans;
    }
    void solve(TreeNode* root,map<TreeNode*,TreeNode*>&gp,map<TreeNode*,TreeNode*>&p){
        if(root==nullptr)return;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            TreeNode* curr=q.front();
            q.pop();
            if(curr->left){
                q.push(curr->left);
                p[curr->left]=curr;
            }
            if(curr->right){
                q.push(curr->right);
                p[curr->right]=curr;
            }
        }
        q.push(root);
        while(!q.empty()){
            TreeNode* curr=q.front();
            q.pop();
            if(curr->left){
                q.push(curr->left);
                if(p.find(p[curr->left])!=p.end()){
                    gp[curr->left]=p[p[curr->left]];
                }
            }
            if(curr->right){
                q.push(curr->right);
                if(p.find(p[curr->right])!=p.end()){
                    gp[curr->right]=p[p[curr->right]];
                }
            }
        }
    }
};