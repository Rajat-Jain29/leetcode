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
   
    int maxDepth(TreeNode* node) {
         if (node == NULL) return 0;
        // queue<TreeNode*> q;
        // q.push(node);
        // int k=0;
        // while(!q.empty()){
        //     int size = q.size();
        //     k++;
        //     for(int i=0;i<size;i++){
        //         node = q.front();
        //         q.pop();
        //         if(node->left)
        //             q.push(node->left);
        //         if(node->right)
        //             q.push(node->right);
        //     }
        // }
        // return k;
        int l = maxDepth(node->left);
        int r = maxDepth(node->right);
        return 1+max(l,r);
        
        
    }
};