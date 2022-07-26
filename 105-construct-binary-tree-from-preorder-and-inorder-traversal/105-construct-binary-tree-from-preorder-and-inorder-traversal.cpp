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
    unordered_map<int,int> m;
      TreeNode *solve(vector<int>& preorder,int pres,int pren, vector<int>& inorder,int ins,int in){
          if( pres > pren  || ins > in)
              return NULL;
          TreeNode *node = new TreeNode( preorder[pres] );
          int s = m[node->val];
          int number = s - ins;
          node->left = solve(preorder , pres+1,pres+number,inorder,ins,s);
          node->right = solve(preorder,pres+number+1,pren,inorder,s+1,in);
          return node;
      }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
      
        for(int i=0;i<inorder.size();i++)
            m[inorder[i]] = i;
        TreeNode* root = solve(preorder,0,preorder.size()-1,inorder,0,inorder.size()-1);
        return root;
    }
};