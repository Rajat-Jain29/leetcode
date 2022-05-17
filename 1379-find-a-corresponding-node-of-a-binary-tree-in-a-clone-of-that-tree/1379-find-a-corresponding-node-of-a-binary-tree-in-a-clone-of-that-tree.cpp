/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode *ans;
    void inorder(TreeNode *o,TreeNode *c,TreeNode *t){
        if(o==NULL)
            return;
        inorder(o->left , c->left,t);
        if(o==t){
            ans = c;
        }
        inorder(o->right,c->right,t);
    }
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        inorder(original , cloned , target);
        return ans;
    }
};