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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
         vector<vector<int>> res;
        if(root == NULL)
            return res;
        queue<TreeNode *> q;
        q.push(root);
        int k = 0;
        while(!q.empty()){
            int s = q.size();
            vector<int> p;
            for(int i=0;i<s;i++){
                TreeNode *node = q.front();
                q.pop();
                if(k%2 == 0){
                    p.push_back( node->val);
                }
                else{
                    p.push_back( node->val);
                }
                if(node->left){
                    q.push(node->left);
                }
                if(node->right){
                    q.push(node->right);
                }
            }
            if(k % 2 != 0){
                reverse(p.begin(),p.end());
            }
            k++;
            res.push_back(p);
        }
        return res;
    }
};