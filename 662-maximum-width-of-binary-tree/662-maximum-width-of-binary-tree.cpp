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
        queue< pair<TreeNode* , int> > q;
        q.push({root , 0});
        int ans = 0;
        while(!q.empty()){
            int size = q.size();
            int minn = q.front().second;
            int f,l;
            for(int i=0;i<size;i++){
                TreeNode *node = q.front().first;
                int curr_id = q.front().second - minn;
                if(i==0)
                    f = curr_id;
                if(i==size-1)
                    l = curr_id;
                q.pop();
                if(node->left)
                    q.push( {node->left , 2LL*curr_id + 1} );
                 if(node->right)
                    q.push({node->right , 2LL*curr_id + 2});
            }
            ans = max(ans , l-f+1);
        }
        return ans;
    }
};