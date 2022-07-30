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
    bool solve(TreeNode* root,TreeNode *minn,TreeNode *maxx){
        if(root == NULL)
            return true;
       if(minn != NULL && root->val <= minn->val  ||  maxx !=NULL && root->val >= maxx->val)
            return false;
        
        return solve(root->left , minn,root) && solve(root->right, root,maxx);
    }
    bool isValidBST(TreeNode* root) {
        return solve(root, NULL,NULL);
    }
};