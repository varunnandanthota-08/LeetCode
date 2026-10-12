// Last updated: 10/12/2026, 7:16:07 PM
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
    int amountOfTime(TreeNode* root, int start) {
        unordered_map<TreeNode*,TreeNode*>parents;
        TreeNode* target=nullptr;
        solve(root,parents,target,start);
        queue<TreeNode*>q;
        q.push(target);
        unordered_map<TreeNode*,bool>vis;
        vis[target]=true;
        int cnt=0;
        while(!q.empty()){
            cnt++;
            int size=q.size();
            for(int i=0;i<size;i++){
                TreeNode* curr=q.front();
                q.pop();
                if(curr->left&&!vis[curr->left]){
                    vis[curr->left]=true;
                    q.push(curr->left);
                }
                if(curr->right&&!vis[curr->right]){
                    vis[curr->right]=true;
                    q.push(curr->right);
                }
                if(parents[curr]&&!vis[parents[curr]]){
                    vis[parents[curr]]=true;
                    q.push(parents[curr]);
                }
            }
        }
        return cnt-1;
    }
    void solve(TreeNode* root,unordered_map<TreeNode*,TreeNode*>&parents,TreeNode* &target,int start){
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            TreeNode* curr=q.front();
            if(curr->val==start){
                target=curr;
            }
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
