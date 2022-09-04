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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        // node,vertical,level;
        map< int, map<int,multiset<int>>  > m;
        queue< pair<TreeNode*,pair<int,int>> > q;
        q.push({root,{0,0}});
        while( !q.empty() ){
            TreeNode *node = q.front().first;
            int ver = q.front().second.first;
            int lev = q.front().second.second;
            m[ver][lev].insert( node->val );
            q.pop();
            if(node->left)
                q.push( {node->left,{ver-1,lev+1}} );
            if(node->right)
                q.push( {node->right,{ver+1,lev+1}} );
        }
        vector<vector<int>> res;
        for(auto it : m){
            vector<int> c;
            for(auto i : it.second){
                c.insert( c.end() , i.second.begin(),i.second.end() );
            }
            res.push_back(c);
        }
        return res;
    }
    
};