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
    vector<string> res;
    
    void solve(TreeNode *root,string sum){
        sum += to_string(root->val) + "->";
        if(root->left)
            solve(root->left,sum);
        if(root->right)
            solve(root->right,sum);
        if(root->left == NULL && root->right == NULL){
            res.push_back( sum.substr(0,sum.length()-2) );
            return ;
        }
        
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        string sum = "";
        solve(root,sum);
        
        return res;
    }
};