// Last updated: 10/27/2026, 8:45:32 PM
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        if(root==nullptr)return "";
        queue<TreeNode*>q;
        q.push(root);
        string tree;
        while(!q.empty()){
            TreeNode* curr=q.front();
            q.pop();
            if(curr){
                tree=tree+to_string(curr->val)+",";
                q.push(curr->left);
                q.push(curr->right);
            }
            else{
                tree+="#,";
            }
        }
        if(tree.size()==0)tree.pop_back();
        return tree;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        if(data.size()==0)return nullptr;
        stringstream ss(data);
        string token;
        vector<string>v;
        while(getline(ss,token,',')){
            v.push_back(token);
        }
        if(v[0]=="null")return nullptr;
        queue<TreeNode*>q;
        TreeNode* root=new TreeNode(stoi(v[0]));
        q.push(root);
        int i=1;
        while(i<v.size()&&!q.empty()){
            TreeNode* curr=q.front();
            q.pop();
            if(v[i]!="#"){
                curr->left=new TreeNode(stoi(v[i]));
                q.push(curr->left);
            }
            i++;
            if(i<v.size()&&v[i]!="#"){
                curr->right=new TreeNode(stoi(v[i]));
                q.push(curr->right);
            }
            i++;
        }
        return root;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec* ser = new Codec();
// Codec* deser = new Codec();
// string tree = ser->serialize(root);
// TreeNode* ans = deser->deserialize(tree);
// return ans;