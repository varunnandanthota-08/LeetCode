// Last updated: 10/12/2026, 7:24:31 PM
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
    int sumNumbers(TreeNode* root) {
        string s;
        vector<string>ds;
        dfs(root,s,ds);
        int ans=0;
        for(string s:ds){
            if(s!="")ans+=stoi(s);
        }
        return ans;
    }
    void dfs(TreeNode* root,string &s,vector<string>&ds){
        if(root==nullptr)return;
        s+=to_string(root->val);
        if(root->left==nullptr&&root->right==nullptr){
            ds.push_back(s);
            s.pop_back();
            return;
        }
        dfs(root->left,s,ds);
        dfs(root->right,s,ds);
        s.pop_back();
        return;
    }
};