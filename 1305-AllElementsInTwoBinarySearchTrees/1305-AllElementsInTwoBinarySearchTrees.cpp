// Last updated: 10/27/2026, 8:44:14 PM
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
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int>v1,v2;
        dfs(root1,v1);
        dfs(root2,v2);
        if(v1.size()==0||v2.size()==0){
            if(v1.size()==0&&v2.size()==0)return {};
            if(v1.size()==0)return v2;
            if(v2.size()==0)return v1;
        }
        int i=0,j=0,k=0;
        int l1=v1.size(),l2=v2.size();
        vector<int>sorted(l1+l2);
        while(i<l1&&j<l2){
            if(v1[i]>v2[j]){
                sorted[k++]=v2[j++];
            }
            else{
                sorted[k++]=v1[i++];
            }
        }
        while(i<l1){
            sorted[k++]=v1[i++];
        }
        while(j<l2){
            sorted[k++]=v2[j++];
        }
        return sorted;
    }
    void dfs(TreeNode* root,vector<int>&v){
        if(root==nullptr)return;
        dfs(root->left,v);
        v.push_back(root->val);
        dfs(root->right,v);
        return;
    }
};