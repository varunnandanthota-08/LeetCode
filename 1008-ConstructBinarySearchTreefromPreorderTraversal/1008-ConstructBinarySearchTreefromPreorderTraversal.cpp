// Last updated: 10/10/2026, 3:52:16 PM
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
14    TreeNode* bstFromPreorder(vector<int>& preorder) {
15        int i=0;
16        return solve(preorder,i,INT_MIN,INT_MAX);
17    }
18    TreeNode* solve(vector<int>&preorder,int &i,int low,int high){
19        if(i==preorder.size())return nullptr;
20        int val=preorder[i];
21        if(val<low||val>high)return nullptr;
22        TreeNode* root=new TreeNode(val);
23        i++;
24        root->left=solve(preorder,i,low,val);
25        root->right=solve(preorder,i,val,high);
26        return root;
27    }
28};