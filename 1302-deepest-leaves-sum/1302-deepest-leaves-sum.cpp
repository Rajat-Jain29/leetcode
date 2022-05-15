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
    int height(TreeNode *root){
        if(root==NULL)
            return 0;
        int lh = height(root->left);
        int rh = height(root->right);
        return max(lh,rh)+1;
    }
    int deepestLeavesSum(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        int k = height(root);
      
        int r = 1;
         vector<int> p;
        while(!q.empty()){
             p={};
            int size = q.size();
            for(int i=0;i<size;i++){
                TreeNode *node = q.front();
                q.pop();
                p.push_back(node->val);
                if(node->left)
                    q.push(node->left);
                if(node->right)
                    q.push(node->right);
            }
        }
        int sum = 0;
        for(int i : p)
            sum += i;
        return sum;
    }
};