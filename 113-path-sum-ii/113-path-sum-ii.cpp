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
    vector<vector<int>> res;
    vector<int> ans;
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        if( !root )
            return res;
        ans.push_back(root->val);
        targetSum -= root->val;
        if(root->left == NULL && root->right == NULL && targetSum == 0)
            res.push_back(ans);
        pathSum(root->left , targetSum);
        pathSum(root->right , targetSum);
        ans.pop_back();
        return res;
    }
};