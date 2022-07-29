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
    void in(TreeNode* root){
        if(root == NULL)
            return;
        p.push_back(root->val);
        in(root->left);
        in(root->right);
    }
    bool findTarget(TreeNode* root, int k) {
        in(root);
        unordered_map<int,int> m;
        for(int i=0;i<p.size();i++){
            if( m.find( k - p[i] ) != m.end() )
                return true;
            m[p[i]] = i;
        }
        return false;
    }
};