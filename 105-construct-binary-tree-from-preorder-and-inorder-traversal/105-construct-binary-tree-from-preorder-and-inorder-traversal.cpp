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
    TreeNode* solve(vector<int>& preorder,int prestart,int prend,vector<int>& inorder,int instart,int inend){
        
        if(prestart > prend || instart > inend )
            return NULL;
        TreeNode *root = new TreeNode( preorder[prestart] );
        int val = m[root->val];
        int number = val - instart;
        root->left = solve(preorder,prestart+1,prestart+number,inorder,instart,val-1 );
        root->right = solve(preorder,prestart+number+1,prend,inorder,val+1,inend);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
      
        for(int i=0;i<inorder.size();i++)
            m[inorder[i]] = i;
        TreeNode *root = solve(preorder,0,preorder.size()-1,inorder,0,inorder.size()-1);
        return root;
        
    }
};