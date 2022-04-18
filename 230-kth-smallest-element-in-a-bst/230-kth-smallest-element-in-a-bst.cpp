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
        if(root==NULL)
            return ;
        inorder(root->left);
        p.push_back(root->val);
        inorder(root->right);
    }
    int kthSmallest(TreeNode* root, int k) {
        inorder(root);
        return p[k-1];
    //     priority_queue<int> q;
    //     for(int i=0;i<p.size() ;i++){
    //         q.push(p[i]);
    //         if(q.size() > k)
    //             q.pop();
    //     }
    //     return q.top();
     }
};