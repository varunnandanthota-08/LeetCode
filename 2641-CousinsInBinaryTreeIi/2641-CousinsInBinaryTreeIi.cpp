// Last updated: 10/27/2026, 8:42:31 PM
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
    TreeNode* replaceValueInTree(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            vector<int>level;
            vector<TreeNode*>bfs;
            vector<int>counts;
            for(int i=0;i<size;i++){
                TreeNode* curr=q.front();
                q.pop();
                int sum=0;
                int count=0;
                if(curr->left){
                    q.push(curr->left);
                    bfs.push_back(curr->left);
                    sum+=curr->left->val;
                    count++;
                }
                if(curr->right){
                    q.push(curr->right);
                    bfs.push_back(curr->right);
                    sum+=curr->right->val;
                    count++;
                }
                level.push_back(sum);
                counts.push_back(count);
            }
            int total=0;
            for(int x:level)total+=x;
            for(int i=0;i<level.size();i++){
                level[i]=total-level[i];
            }
            int k=0;
            for(int i=0;i<counts.size();i++){
                for(int j=0;j<counts[i];j++){
                    bfs[k++]->val=level[i];
                }
            }
        }
        root->val=0;
        return root;
    }
};