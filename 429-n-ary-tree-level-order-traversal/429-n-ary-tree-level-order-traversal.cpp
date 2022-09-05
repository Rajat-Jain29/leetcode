/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        queue<Node*> q;
        q.push(root);
        vector<vector<int>> res;
        if(root==NULL)
            return res;
        while(!q.empty()){
            int s = q.size();
            vector<int> p;
            for(int i=0;i<s;i++){
                Node *node = q.front();
                q.pop();
                p.push_back(node->val);
                for (Node* child : node->children) {
                    q.push(child);
                }
            }
            res.push_back(p);
        }
        return res;
    }
};