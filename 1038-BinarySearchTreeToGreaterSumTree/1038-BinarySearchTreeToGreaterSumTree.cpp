// Last updated: 10/12/2026, 7:21:20 PM
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
    TreeNode* bstToGst(TreeNode* root) {
        vector<int>temp;
        queue<TreeNode*>q1;
        q1.push(root);
        while(!q1.empty()){
            int size=q1.size();
            for(int i=0;i<size;i++){
                TreeNode* curr=q1.front();
                q1.pop();
                temp.push_back(curr->val);
                if(curr->left!=nullptr)q1.push(curr->left);
                if(curr->right!=nullptr)q1.push(curr->right);
            }
        }
        vector<int>copy=temp;
        for(int j=0;j<copy.size();j++){
            int curr=0;
            for(int i=0;i<temp.size();i++){
                if(temp[i]>=copy[j]){
                    curr+=temp[i];
                }
            }
            copy[j]=curr;
        }
        queue<TreeNode*>q2;
        q2.push(root);
        int idx=0;
        while(!q2.empty()){
            int size=q2.size();
            for(int i=0;i<size;i++){
                TreeNode* curr=q2.front();
                curr->val=copy[idx++];
                q2.pop();
                if(curr->left!=nullptr)q2.push(curr->left);
                if(curr->right!=nullptr)q2.push(curr->right);
            }
        }
        return root;
    }
};
//4 1 6 0 2 5 7 3 8