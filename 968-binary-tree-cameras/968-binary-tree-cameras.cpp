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
    int cam = 0;
    unordered_set<TreeNode*> s;
    void dfs(TreeNode *root,TreeNode *par){
        if(root == NULL)
            return ;
        dfs(root->left,root);
        dfs(root->right,root);
        
if( par == NULL && s.find(root) == s.end()||s.find(root->left) == s.end()||s.find(root->right) == s.end()  ){
        cam++;
        s.insert(root);
        s.insert(par);
        s.insert(root->left);
        s.insert(root->right);
    }
        
}
    int minCameraCover(TreeNode* root) {
        if(root == NULL)
            return 0;
        s.insert(NULL);
        dfs(root , NULL);
        return cam;
    }
};