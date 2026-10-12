// Last updated: 10/12/2026, 7:22:17 PM
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        map<TreeNode*,TreeNode*>parents;
        solve(root,parents);
        map<TreeNode*,bool>vis;
        queue<TreeNode*>q;
        q.push(target);
        vis[target]=true;
        int level=0;
        while(!q.empty()){
            int size=q.size();
            if((level++)==k)break;
            for(int i=0;i<size;i++){
                TreeNode* curr=q.front();
                q.pop();
                if(curr->left&&!vis[curr->left]){
                    q.push(curr->left);
                    vis[curr->left]=true;
                }
                if(curr->right&&!vis[curr->right]){
                    q.push(curr->right);
                    vis[curr->right]=true; 
                }
                if(parents[curr]&&!vis[parents[curr]]){
                    vis[parents[curr]]=true;
                    q.push(parents[curr]);
                }
            }
        }
        vector<int>v;
        while(!q.empty()){
            v.push_back(q.front()->val);
            q.pop();
        }
        return v;
    }
    void solve(TreeNode* root,map<TreeNode*,TreeNode*>&parents){
        if(root==nullptr)return;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            TreeNode* curr=q.front();
            q.pop();
            if(curr->left){
                parents[curr->left]=curr;
                q.push(curr->left);
            }
            if(curr->right){
                parents[curr->right]=curr;
                q.push(curr->right);
            }
        }
    }
};