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
    TreeNode* TreeBuild(vector<int> &pre,int pres,int pree,vector<int> &in,int ins,int ine,unordered_map<int,int> &m){
        if(pres > pree || ins > ine)
            return NULL;
        TreeNode *node = new TreeNode( pre[pres] );
        int inroot = m[node->val];
        int nums = inroot - ins;
        node->left = TreeBuild(pre,pres+1,pres+nums , in , ins,inroot-1,m);
        node->right = TreeBuild(pre,pres+nums+1,pree , in , inroot +1,ine,m);
        return node;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        unordered_map<int,int> m;
        for(int i=0;i<inorder.size() ;i++)
            m[inorder[i]] = i;
        
        TreeNode *root = TreeBuild( preorder , 0 , preorder.size()-1,                                                             inorder,0,inorder.size()-1,m);
        return root;
        
    }
};