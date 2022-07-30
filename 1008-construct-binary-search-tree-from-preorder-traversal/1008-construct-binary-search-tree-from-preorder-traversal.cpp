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
    TreeNode *solve(vector<int>& pre,int &i,int bound){
        if( i == pre.size() || pre[i] > bound )
            return NULL;
        TreeNode *node =new TreeNode(pre[i++]);
        node->left = solve(pre,i,node->val);
        node->right = solve(pre,i,bound);
        return node;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
       //  find inorder  and then ... make tree by preorder and inorder.   - 1st
        int i=0;
        return solve( preorder,i, INT_MAX);
    }
};