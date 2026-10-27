// Last updated: 10/27/2026, 8:45:51 PM
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
        string tree;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            bool allNull=true;
            for(int i=0;i<size;i++){
                TreeNode* curr=q.front();
                q.pop();
                if(curr){
                    allNull=false;
                    tree=tree+to_string(curr->val)+",";
                    q.push(curr->left);
                    q.push(curr->right);
                }
                else{
                    tree+="null,";
                }
            }
            if(allNull){
                break;
            }
        }
        if(tree.size()!=0)tree.pop_back();
        return tree;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        if(data.size()==0)return nullptr;
        vector<string>v;
        stringstream ss(data);
        string token;
        while(getline(ss,token,',')){
            v.push_back(token);
        }
        if(v[0]=="null")return nullptr;
        queue<TreeNode*>q;
        TreeNode* root=new TreeNode(stoi(v[0]));
        q.push(root);
        int i=1;
        while(!q.empty()&&i<v.size()){
            TreeNode* curr=q.front();
            q.pop();
            if(v[i]!="null"){
                curr->left=new TreeNode(stoi(v[i]));
                q.push(curr->left);
            }
            i++;
            if(i<v.size()&&v[i]!="null"){
                curr->right=new TreeNode(stoi(v[i]));
                q.push(curr->right);
            }
            i++;
        }
        return root;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));