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
    vector<double> averageOfLevels(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        vector<double> res;
        while( !q.empty() ){
            int s = q.size();
            vector<int> p;
            for(int i=0;i<s;i++){
                TreeNode *node = q.front();
                q.pop();
                p.push_back(node->val);
                if(node->left)
                    q.push(node->left);
                if(node->right)
                    q.push(node->right);
            }
            double sum = accumulate(p.begin(),p.end(),0.0);
            res.push_back( sum/p.size() );
        }
        return res;
    }
};