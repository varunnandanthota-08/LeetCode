// Last updated: 10/12/2026, 7:15:54 PM
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
    TreeNode* reverseOddLevels(TreeNode* root) {
        int cnt=0;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            vector<TreeNode*>temp;
            for(int i=0;i<size;i++){
                TreeNode* curr=q.front();
                q.pop();
                temp.push_back(curr);
                if (curr->left != nullptr) q.push(curr->left);
                if (curr->right != nullptr) q.push(curr->right);
            }
            if(cnt&1){
                for(int i=0;i<size/2;i++){
                    swap(temp[i]->val,temp[temp.size()-i-1]->val);
                }
            }
            cnt++;
        }
        return root;
    }
};

//q=2
//q=2,3