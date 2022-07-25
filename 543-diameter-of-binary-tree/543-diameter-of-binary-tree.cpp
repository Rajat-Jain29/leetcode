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
    int s = 0;
    int diameter(TreeNode* root){
        if(root == NULL)
            return 0;
        int lh = diameter(root->left);
        int rh = diameter(root->right);
        s = max(s , lh+rh);
        return 1 + max(lh,rh);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        diameter(root);
        return s;        
    }
};