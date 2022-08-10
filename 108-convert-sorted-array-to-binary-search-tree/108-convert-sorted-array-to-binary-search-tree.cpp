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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if(nums.size() == 0)
            return NULL;
        int m = nums.size()/2;
        TreeNode *root = new TreeNode(nums[m]);
        vector<int> p(nums.begin(),nums.begin()+m);
        vector<int> q(nums.begin()+m+1,nums.end());
        root->left = sortedArrayToBST(p);
        root->right = sortedArrayToBST(q);
        return root;
    }
};