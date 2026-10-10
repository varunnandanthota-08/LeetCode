// Last updated: 10/10/2026, 3:46:23 PM
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
15        TreeNode* root=new TreeNode(preorder[0]);
16        for(int i=1;i<preorder.size();i++){
17            int val=preorder[i];
18            TreeNode* curr=new TreeNode(val);
19            TreeNode* temp=root;
20            while(temp){
21                if(curr->val<temp->val){
22                    if(temp->left)temp=temp->left;
23                    else{
24                        temp->left=curr;
25                        break;
26                    }
27                }
28                else{
29                    if(temp->right)temp=temp->right;
30                    else{
31                        temp->right=curr;
32                        break;
33                    }
34                }
35            }
36        }
37        return root;
38    }
39};