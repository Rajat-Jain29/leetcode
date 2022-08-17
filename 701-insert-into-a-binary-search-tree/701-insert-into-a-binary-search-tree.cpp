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
    TreeNode* solve(TreeNode* root, int val){
        if(root == NULL){
            return new TreeNode(val);
        }
        if(root->val > val)
            root->left = solve(root->left,val);
        else
            root->right = solve(root->right,val);
        return root;
    }
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode* v = solve(root,val);
        return v;
        // if(root == NULL)
        //     return new TreeNode(val);
        // TreeNode *curr = root;
        // while(curr!=NULL){
        //     if(curr->val < val){
        //          if(curr->right != NULL)
        //              curr=curr->right;
        //         else{
        //             curr->right = new TreeNode(val);
        //             break;
        //         }
        //     }
        //     else{
        //           if(curr->left != NULL)
        //              curr=curr->left;
        //         else{
        //             curr->left = new TreeNode(val);
        //             break;
        //         }
        //     }
        // }
        // return root;
    }
};