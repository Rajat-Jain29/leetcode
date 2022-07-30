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
    int widthOfBinaryTree(TreeNode* root) {
        if(root == NULL)
            return 0;
        queue<pair<TreeNode*,int>> q; // node,index;
        q.push({root,0});
        int res = 0;
        while(!q.empty()){
            int first=0,last=0;
            int minn = q.front().second;
            int size = q.size();
            for(int i=0;i<size;i++){
                TreeNode *node = q.front().first;
                long long index = q.front().second - minn;
                q.pop();
                if( i == 0)
                    first = index;
                if(i == size - 1)
                    last = index;
                if(node->left)
                    q.push( {node->left,index*2 +1} );
                if(node->right)
                    q.push( {node->right,index*2 +2} );
            }
            res = max(res, last-first+1 );
        }
        return res;
    }
};