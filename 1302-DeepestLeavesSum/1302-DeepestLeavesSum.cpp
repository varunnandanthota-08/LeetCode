// Last updated: 10/10/2026, 10:23:24 PM
1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
8 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
9 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
10 * };
11 */
12class Solution {
13public:
14    int deepestLeavesSum(TreeNode* root) {
15        queue<TreeNode*>q;
16        q.push(root);
17        vector<int>last;
18        while(!q.empty()){
19            vector<int>temp;
20            int size=q.size();
21            for(int i=0;i<size;i++){
22                TreeNode* curr=q.front();
23                q.pop();
24                if(curr->left)q.push(curr->left);
25                if(curr->right)q.push(curr->right);
26                temp.push_back(curr->val);
27            }
28            if(q.size()==0)last=temp;
29        }
30        int ans=0;
31        for(int x:last)ans+=x;
32        return ans;
33    }
34};