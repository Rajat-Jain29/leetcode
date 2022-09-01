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
    int solve(TreeNode *root,int maxx){
        if(root==NULL)
            return 0;
        int res = root->val >= maxx ? 1 : 0;
        res += solve(root->left, max(root->val,maxx) );
        res += solve(root->right , max(root->val,maxx));    
        return res;
    }
    int goodNodes(TreeNode* root) {
        return solve(root, -1000000);
    }
};