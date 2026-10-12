// Last updated: 10/12/2026, 7:21:37 PM
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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        if(root==nullptr)return {};
        vector<vector<int>>v;
        queue<pair<TreeNode*,pair<int,int>>>q;
        q.push({root,{0,0}});
        map<int,vector<pair<int,int>>>mp;
        while(!q.empty()){
            TreeNode* curr=q.front().first;
            int x=q.front().second.first;
            int y=q.front().second.second;
            q.pop();
            mp[y].push_back({x,curr->val});
            if(curr->left!=nullptr){
                q.push({curr->left,{x+1,y-1}});
            }
            if(curr->right!=nullptr){
                q.push({curr->right,{x+1,y+1}});
            }
        }
        for(auto &it:mp){
            sort(it.second.begin(),it.second.end());
            vector<int>temp;
            for(auto &p:it.second){
                temp.push_back(p.second);
            }
            v.push_back(temp);
        }
        return v;
    }
};