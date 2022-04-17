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
    vector<int> p;
    void inorder(TreeNode *root){
        if(root == NULL)
            return ;
        inorder(root->left);
        p.push_back(root->val);
        inorder(root->right);
    }
    TreeNode* increasingBST(TreeNode* root) {
    TreeNode* res = new TreeNode();
    TreeNode* ans = res; 
     inorder(root);
       for(int i=0;i<p.size();i++){
           res->right = new TreeNode(p[i]);
           res = res->right;
        }
        return ans->right;
    }
};