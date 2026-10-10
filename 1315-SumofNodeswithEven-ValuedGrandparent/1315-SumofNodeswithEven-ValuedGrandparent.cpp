// Last updated: 10/10/2026, 10:57:47 PM
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
14    int sumEvenGrandparent(TreeNode* root) {
15        map<TreeNode*,TreeNode*>gp,p;
16        solve(root,gp,p);
17        int ans=0;
18        for(auto &it:gp){
19            if(it.second->val%2==0)ans+=it.first->val;
20        }
21        return ans;
22    }
23    void solve(TreeNode* root,map<TreeNode*,TreeNode*>&gp,map<TreeNode*,TreeNode*>&p){
24        if(root==nullptr)return;
25        queue<TreeNode*>q;
26        q.push(root);
27        while(!q.empty()){
28            TreeNode* curr=q.front();
29            q.pop();
30            if(curr->left){
31                q.push(curr->left);
32                p[curr->left]=curr;
33            }
34            if(curr->right){
35                q.push(curr->right);
36                p[curr->right]=curr;
37            }
38        }
39        q.push(root);
40        while(!q.empty()){
41            TreeNode* curr=q.front();
42            q.pop();
43            if(curr->left){
44                q.push(curr->left);
45                if(p.find(p[curr->left])!=p.end()){
46                    gp[curr->left]=p[p[curr->left]];
47                }
48            }
49            if(curr->right){
50                q.push(curr->right);
51                if(p.find(p[curr->right])!=p.end()){
52                    gp[curr->right]=p[p[curr->right]];
53                }
54            }
55        }
56    }
57};